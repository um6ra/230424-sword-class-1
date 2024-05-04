using System.IO.Ports;
using UnityEngine;

public class ArduinoIMUReader : MonoBehaviour
{
    public Vector3 DriftSlider;
    
    
    SerialPort serialPort = new SerialPort("COM15", 9600); 
    public Transform objectTransform; 
    
    // For basic filtering
    private Vector3 accelLast = Vector3.zero;
    public float lowPassFilterFactor = 0.2f;
    
    private KalmanFilterVector3 kalmanFilter;

    void Start() {
        serialPort.DtrEnable = true;
        serialPort.RtsEnable = true;
        serialPort.Open();
        serialPort.ReadTimeout = 5000;
        Debug.Log("Serial port opened.");
        
        kalmanFilter = new KalmanFilterVector3();
    }

    void Update() {
        if (serialPort.IsOpen) {
            try {
                
                string dataString = serialPort.ReadLine();
               
                // Check for the error indicator from Arduino
                if (dataString.StartsWith("F") || dataString.StartsWith("E")) {
                    Debug.LogError("Sensor error detected.");
                    return;
                }

                string[] data = dataString.Split(',');
                Debug.Log("Received data: " + dataString);
                if (data.Length >= 9) { // Ensure full dataset received
                    // Parse accelerometer data
                    float ax = float.Parse(data[0]);
                    float ay = float.Parse(data[1]);
                    float az = float.Parse(data[2]);
                    Vector3 currentAccel = new Vector3(ax, ay, az);
                    
                    Vector3 filteredAccel = kalmanFilter.Update(currentAccel);
                    
                    //currentAccel = Vector3.Lerp(accelLast, currentAccel, lowPassFilterFactor);
                   // accelLast = currentAccel;
                        
                   Debug.Log(data[0] +  data[1] + data[2]);
        
                    // Apply rotation - assuming you're happy with rotation handling
                    float gx = float.Parse(data[3]);
                    float gy = float.Parse(data[4]);
                    float gz = float.Parse(data[5]);
                    
                    Vector3 currentGyro = new Vector3(gx, gy, -gz);
                    Vector3 filteredGyro = kalmanFilter.Update(currentGyro);
                    objectTransform.Rotate(currentGyro * Time.deltaTime , Space.World);

                    // For movement - This is oversimplified for demonstration
                    // In practice, you'd need to integrate acceleration twice to get position,
                    // but that's very prone to error without removing gravity.
                    // This simple approach just moves the object based on filtered acceleration.

                    filteredAccel -= DriftSlider;
                 //  objectTransform.Translate(filteredAccel * Time.deltaTime);
                }
                
            } catch (System.Exception ex) {
                Debug.LogWarning(ex.Message);
            }
        }
    }

    void OnDestroy() {
        if (serialPort != null && serialPort.IsOpen)
            serialPort.Close();
    }
}