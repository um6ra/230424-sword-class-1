using System.Collections;
using System.IO.Ports;
using System.Collections.Generic;
using UnityEngine;

public class PrintArduinoOutput : MonoBehaviour
{
    SerialPort serialPort = new SerialPort("COM12", 9600); // Adjust COM port and baud rate
    // Start is called before the first frame update
    void Start()
    {
        serialPort.Open();
        serialPort.ReadTimeout = 1000;
    }

    // Update is called once per frame
    void Update()
    {
        
        if (serialPort.IsOpen)
        {
            Debug.Log("Serial port is open");
            try
            {
                string dataString = serialPort.ReadLine(); // Read the information
               // int tiltValue = int.Parse(dataString); // Convert string data to integer
                // Use tiltValue for whatever you need, for example, moving an object
                Debug.Log("Tilt value: " + dataString);
            }
            catch (System.Exception e)
            {
                // Handle exceptions or ignore
                Debug.LogWarning("Error when reading from serial port: " + e.Message);
            }
        }
        
    }
    void OnApplicationQuit()
    {
        if (serialPort != null && serialPort.IsOpen)
            serialPort.Close(); // Close the serial port when the application quits
    }
}
