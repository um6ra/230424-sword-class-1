using System.IO.Ports;
using UnityEngine;
using System.Threading;
using System.Collections.Concurrent;
using UnityEngine.Serialization;

public class ArduinoImuReader : MonoBehaviour
{
    #region Serial Port and Filtering Properties
 
    public Transform objectTransform;

    // Serial port settings
    public string portName = "COM8";
    public int baudRate = 115200;
    private SerialPort _serialPort;
    
    private Thread _dataThread;
    private ConcurrentQueue<string> _dataQueue = new ConcurrentQueue<string>();
    private bool _isRunning = false;


    // For basic filtering
    private Vector3 _accelLast = Vector3.zero;
    public float lowPassFilterFactor = 0.2f;
    
    private KalmanFilterVector3 _kalmanFilter;
    private MadgwickFilter _madgwickFilter;
    
    private Vector3 _rawGyro;
    private Vector3 _rawAccel;
    private Vector3 _madgwickGyro;
    
    // Variables to store filtered sensor data for external access
    public Vector3 filteredAccel = Vector3.zero;
    public Vector3 filteredGyro = Vector3.zero;
    public Quaternion filteredQuaternion = Quaternion.identity;
    #endregion

    #region Unity Lifecycle

    void Start()
    {
        _serialPort = new SerialPort(portName, baudRate)
        {
            DtrEnable = true,
            RtsEnable = true,
            ReadTimeout = 5000
        };
        _serialPort.Open();
        
        _isRunning = true;
        _dataThread = new Thread(ReadSerialData);
        _dataThread.Start();

        _kalmanFilter = new KalmanFilterVector3();
        _madgwickFilter = new MadgwickFilter();
    }

    void Update()
    {
        while (_dataQueue.TryDequeue(out string dataString))
        {
            // Check for the error indicator from Arduino
            if (dataString.StartsWith("F") || dataString.StartsWith("E"))
            {
                Debug.LogError("Sensor error detected.");
                continue;
            }

            string[] data = dataString.Split(',');  // Split the data string into parts
            if (data.Length >= 9)
            {
                ProcessData(data);
            }
        }
        
        //Applying Rotation
        filteredQuaternion = _madgwickFilter.UpdateFilter(_madgwickGyro, _rawAccel, Time.deltaTime);
        objectTransform.rotation = ApplyQuaternionToUnityCoordinateSystem(filteredQuaternion);
    }
    
    void OnDestroy()
    { 
        _isRunning = false;
        if (_dataThread != null && _dataThread.IsAlive) _dataThread.Join();
        
        if (_serialPort != null && _serialPort.IsOpen) _serialPort.Close();  // Close the serial port when the script or object is destroyed
    }
    #endregion

    #region Data Processing
    
    private void ReadSerialData()
    {
        try
        {
            while (_isRunning && _serialPort.IsOpen)
            {
                try
                {
                    string dataString = _serialPort.ReadLine();
                    _dataQueue.Enqueue(dataString);
                }
                catch (System.TimeoutException) { }
            }
        }
        catch (System.Exception ex)
        {
            Debug.LogError("Serial port reading error: " + ex.Message);
        }
    }
    private void ProcessData(string[] data)
    {
        float ax = float.Parse(data[0]);
        float ay = float.Parse(data[1]);
        float az = float.Parse(data[2]);
        _rawAccel = new Vector3(ax, ay,az);
        filteredAccel = _rawAccel;//_kalmanFilter.Update(filteredAccel); cant use kalman for now or it filters out gravity?
        
        float gx = float.Parse(data[3]);
        float gy = float.Parse(data[4]);
        float gz = float.Parse(data[5]);
        _rawGyro = new Vector3(gx, gy, gz); 
        _madgwickGyro = new Vector3(gx, -gy, gz) * Mathf.Deg2Rad; // Convert gyro data to radians and align y axis to madgwick filter
        filteredGyro = _kalmanFilter.Update(_rawGyro); 
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