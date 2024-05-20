using System.Collections;
using System.IO.Ports;
using System.Threading;
using UnityEngine;

public class SerialComm : MonoBehaviour
{
    public string portName = "COM3";
    public int baudRate = 9600;

    private SerialPort serialPort;
    private Thread serialThread;
    private bool isRunning = false;

    void Start()
    {
        OpenConnection();
    }

    void OnApplicationQuit()
    {
        CloseConnection();
    }

    void OpenConnection()
    {
        serialPort = new SerialPort(portName, baudRate);
        try
        {
            serialPort.Open();
            serialPort.ReadTimeout = 50;
            isRunning = true;
            serialThread = new Thread(ReadSerial);
            serialThread.Start();
        }
        catch (System.Exception e)
        {
            Debug.LogError("Unable to open serial port: " + e.Message);
        }
    }

    void ReadSerial()
    {
        while (isRunning && serialPort != null && serialPort.IsOpen)
        {
            try
            {
                // Add read logic if necessary
            }
            catch (System.TimeoutException)
            {
            }
        }
    }

    void CloseConnection()
    {
        isRunning = false;
        if (serialThread != null) serialThread.Join();
        if (serialPort != null && serialPort.IsOpen) serialPort.Close();
    }

    // Call this to control LEDs
    public void WriteToSerial(string message)
    {
        if (serialPort != null && serialPort.IsOpen)
        {
            serialPort.WriteLine(message);
        }
    }
    
    public void UpdateMana(float manaValue)
    {
        WriteToSerial(manaValue.ToString());
    }
}