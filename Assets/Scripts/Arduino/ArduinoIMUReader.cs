using System.IO.Ports;
using UnityEngine;
using UnityEngine.Serialization;

public class ArduinoImuReader : MonoBehaviour
{
    #region Serial Port and Filtering Properties
 
    public Transform objectTransform;

    // Serial port settings
    public SerialPort SerialPort = new SerialPort("COM8", 115200);

    // For basic filtering
    private Vector3 _accelLast = Vector3.zero;
    public float lowPassFilterFactor = 0.2f;
    
    private KalmanFilterVector3 _kalmanFilter;
    private MadgwickFilter _madgwickFilter;
    
    private Vector3 _rawGyro;
    private Vector3 _rawAccel;
    
    // Variables to store filtered sensor data for external access
    public Vector3 filteredAccel = Vector3.zero;
    public Vector3 filteredGyro = Vector3.zero;
    public Quaternion filteredQuaternion = Quaternion.identity;
    #endregion

    #region Unity Lifecycle

    void Start()
    {
        SerialPort.DtrEnable = true;
        SerialPort.RtsEnable = true;
        SerialPort.Open();
        SerialPort.ReadTimeout = 5000;
        Debug.Log("Serial port opened.");
        _kalmanFilter = new KalmanFilterVector3();
        _madgwickFilter = new MadgwickFilter();
    }

    void Update()
    {
        if (SerialPort.IsOpen)
        {
            try
            {
                string dataString = SerialPort.ReadLine();  
                // Check for the error indicator from Arduino
                if (dataString.StartsWith("F") || dataString.StartsWith("E"))
                {
                    Debug.LogError("Sensor error detected."); 
                    return;  
                }
                
                string[] data = dataString.Split(',');  // Split the data string into parts
                if (data.Length >= 9)
                {  
                    ProcessData(data);  
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
        if (SerialPort != null && SerialPort.IsOpen) SerialPort.Close();  // Close the serial port when the script or object is destroyed
    }
    #endregion

    #region Data Processing
    private void ProcessData(string[] data)
    {
        float ax = float.Parse(data[0]);
        float ay = float.Parse(data[1]);
        float az = float.Parse(data[2]);
        _rawAccel = new Vector3(ax, ay,az);
        filteredAccel = _rawAccel;//_kalmanFilter.Update(filteredAccel);  // Apply Kalman filter to accelerometer data
        
        float gx = float.Parse(data[3]);
        float gy = float.Parse(data[4]);
        float gz = float.Parse(data[5]);
        _rawGyro = new Vector3(gx, gy, gz); 
        Vector3 madgwickGyro = new Vector3(gx, -gy, gz) * Mathf.Deg2Rad; // Convert gyro data to radians and align y axis to madgwick filter
        filteredGyro = _kalmanFilter.Update(_rawGyro);  // Apply Kalman filter to gyroscope data
        //  objectTransform.Rotate(filteredGyro * Time.deltaTime, Space.World);  // Apply rotation based on filtered gyro data
        filteredQuaternion = _madgwickFilter.UpdateFilter(madgwickGyro, _rawAccel, Time.deltaTime);
        Debug.Log(filteredQuaternion);
        objectTransform.rotation = ApplyQuaternionToUnityCoordinateSystem(filteredQuaternion);
       
    }

    private Quaternion ApplyQuaternionToUnityCoordinateSystem(Quaternion q)
    {
        q = new Quaternion(q.x, q.z, -q.y, q.w);
        return q;
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