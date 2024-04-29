using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO.Ports;

public class LEDControl : MonoBehaviour
{
    SerialPort sp;
    public string portName = "COM13"; // Change to match your Arduino port

    void Start() {
        sp = new SerialPort(portName, 9600);
        try {
            sp.Open(); // Open the serial port
        } catch (System.Exception e) {
            Debug.LogError("Could not open serial port: " + e.Message);
        }
    }
    
    void Update() {
        if(Input.GetKeyDown(KeyCode.Alpha1)) {
            ControlLED(0, false);
        }
        if(Input.GetKeyDown(KeyCode.Alpha2)) {
            ControlLED(1, false);
        }
        if(Input.GetKeyDown(KeyCode.Alpha3)) {
            ControlLED(2, false);
        }
        if(Input.GetKeyDown(KeyCode.Alpha4)) {
            ControlLED(3, false);
        }
    }

    public void ControlLED(int index, bool state)
    {
        if (sp != null && sp.IsOpen)
        {
            string command = index.ToString() + "," + (state ? "1" : "0") + "\n";
            sp.Write(command);
        }
    }

    void OnApplicationQuit() {
        if(sp != null && sp.IsOpen)
            sp.Close(); // Close the port when the application closes
    }
}