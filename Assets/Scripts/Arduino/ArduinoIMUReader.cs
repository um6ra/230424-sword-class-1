using System.IO.Ports;
using UnityEngine;

public class ArduinoIMUReader : MonoBehaviour
{
    #region Serial Port and Filtering Properties
    public Vector3 DriftSlider;
    public Transform objectTransform;

    // Serial port settings
    private SerialPort serialPort = new SerialPort("COM4", 9600);

    // For basic filtering
    private Vector3 accelLast = Vector3.zero;
    public float lowPassFilterFactor = 0.2f;

    private KalmanFilterVector3 kalmanFilter;

    // Variables to store filtered sensor data for external access
    private Vector3 filteredAccel = Vector3.zero;
    private Vector3 filteredGyro = Vector3.zero;
    #endregion

    #region Unity Lifecycle 
    void Start()
    {

        serialPort.DtrEnable = true;  // Ensure that the DTR is enabled to help with Arduino recognition
        serialPort.RtsEnable = true;  // Ensure that the RTS is enabled to help with Arduino recognition
        serialPort.Open();  // Open the serial port connection
        serialPort.ReadTimeout = 5000;  // Set the serial read timeout to 5000 milliseconds
        Debug.Log("Serial port opened.");  // Log that the serial port is successfully opened

        kalmanFilter = new KalmanFilterVector3();  // Initialize the Kalman filter
    }

    void Update()
    {
        if (serialPort.IsOpen)
        {
            try
            {
                string dataString = serialPort.ReadLine();  // Read a line from the serial port

                // Check for the error indicator from Arduino
                if (dataString.StartsWith("F") || dataString.StartsWith("E"))
                {
                    Debug.LogError("Sensor error detected.");  // Log an error if the first character is F or E
                    return;  // Return early if there is an error
                }

                //Debug.Log("Received data: " + dataString);  // Log the received data string
                string[] data = dataString.Split(',');  // Split the data string into parts
                if (data.Length >= 9)
                {  // Ensure full dataset received
                    ProcessData(data);  // Process the data if all parts are received
                }
            }
            catch (System.Exception ex)
            {
                Debug.LogWarning(ex.Message);  // Log any exceptions that occur during reading
            }
        }
    }

    void OnDestroy()
    {
        if (serialPort != null && serialPort.IsOpen)
            serialPort.Close();  // Close the serial port when the script or object is destroyed
    }
    #endregion

    #region Data Processing
    private void ProcessData(string[] data)
    {
        // Parse and apply filtering to accelerometer data
        float ax = float.Parse(data[0]);
        float ay = float.Parse(data[1]);
        float az = float.Parse(data[2]);
        Vector3 currentAccel = new Vector3(ax, ay, az);
        filteredAccel = kalmanFilter.Update(currentAccel);  // Apply Kalman filter to accelerometer data

        // Parse and apply filtering to gyroscope data
        float gx = float.Parse(data[3]);
        float gy = float.Parse(data[4]);
        float gz = float.Parse(data[5]);
        Vector3 currentGyro = new Vector3(gx, gy, -gz);
        filteredGyro = kalmanFilter.Update(currentGyro);  // Apply Kalman filter to gyroscope data

        objectTransform.Rotate(filteredGyro * Time.deltaTime, Space.World);  // Apply rotation based on filtered gyro data
    }
    #endregion

    #region Public Methods
    public Vector3 GetFilteredGyro()
    {
        return filteredGyro;  // Provide filtered gyroscope data
    }

    public Vector3 GetFilteredAccel()
    {
        return filteredAccel;  // Provide filtered accelerometer data
    }
    #endregion
}