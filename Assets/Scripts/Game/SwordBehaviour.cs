using UnityEngine;

public class SwordBehaviour : MonoBehaviour
{
    #region Properties and Fields
    public ArduinoIMUReader imuReader;
    public float swingThreshold = 0.5f; // Threshold for detecting a swing

    private Vector3 lastGyro; // Last frame's gyroscope data
    private bool isSwinging = false; // Flag to check if currently swinging
    #endregion

    #region Unity Lifecycle
    void Update()
    {
        if (imuReader != null)
        {
            Vector3 filteredGyro = imuReader.GetFilteredGyro(); // Get the filtered gyroscope data from IMU reader
            HandleSwordSwing(filteredGyro); // Handle the sword swing detection and processing
        }
    }
    #endregion

    #region Sword Movement Handling
    private void HandleSwordSwing(Vector3 currentGyro)
    {
        Vector3 gyroDelta = currentGyro - lastGyro; // Calculate the change in gyro data between frames
        lastGyro = currentGyro;

        if (gyroDelta.magnitude > swingThreshold)
        {
            isSwinging = true; // Mark the sword as swinging
            Debug.Log("Sword swing detected!");
            Invoke(nameof(ResetSwing), 2f); // Set a delay after which the sword stops swinging
        }
    }
    #endregion

    #region Collision Detection
    void OnTriggerEnter(Collider other)
    {
        Debug.Log("Collision detected with: " + other.name);
        if (other.CompareTag("Fruit")) // Check if the sword hits a fruit later optimise it with swinging
        {
            Debug.Log("Hit fruit!");
            Destroy(other.gameObject); // Destroy the fruit object
            if (PointSystem.Instance != null)
            {
                PointSystem.Instance.AddPointsForFruitSlashed(); // Add points for slashing the fruit
                Debug.Log("Fruit slashed.");
            }
        }
    }
    #endregion

    #region Swing State Management
    private void ResetSwing()
    {
        isSwinging = false; // Reset the swinging flag after the delay
        Debug.Log("Swing reset.");
    }
    #endregion
}
