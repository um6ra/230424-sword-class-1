using UnityEngine;

public class MadgwickFilter
{
    // Filter coefficients
    private float beta = 0.1f;  // 2 * proportional gain

    // Quaternion of sensor frame relative to auxiliary frame
    private Quaternion q;

    public MadgwickFilter()
    {
        q = new Quaternion(1f, 0f, 0f, 0f);
    }

    // Call this function to update the filter with new accelerometer and gyroscope data
    public Quaternion UpdateFilter(Vector3 gyro, Vector3 accel, float deltaTime)
    {
        // Ensure gyroscope data is in radians per second
        float gx = gyro.x;
        float gy = gyro.y;
        float gz = gyro.z;

        // Ensure accelerometer data is in meters per second squared or normalized in g
        float ax = accel.x;
        float ay = accel.y;
        float az = accel.z;

        // Normalise accelerometer measurement
        float norm = Mathf.Sqrt(ax * ax + ay * ay + az * az);
        if (norm == 0f) return q; // Handle NaN
        norm = 1.0f / norm;       // Use reciprocal for division
        ax *= norm;
        ay *= norm;
        az *= norm;

        // Auxiliary variables to avoid repeated arithmetic
        float _2q0 = 2f * q.w;
        float _2q1 = 2f * q.x;
        float _2q2 = 2f * q.y;
        float _2q3 = 2f * q.z;
        float _4q0 = 4f * q.w;
        float _4q1 = 4f * q.x;
        float _4q2 = 4f * q.y;
        float _8q1 = 8f * q.x;
        float _8q2 = 8f * q.y;
        float q0q0 = q.w * q.w;
        float q1q1 = q.x * q.x;
        float q2q2 = q.y * q.y;
        float q3q3 = q.z * q.z;

        // Gradient decent algorithm corrective step
        float s0 = _4q0 * q2q2 + _2q2 * ax + _4q0 * q1q1 - _2q1 * ay;
        float s1 = _4q1 * q3q3 - _2q3 * ax + 4f * q0q0 * q.x - _2q0 * ay - _4q1 + _8q1 * q1q1 + _8q1 * q2q2 + _4q1 * az;
        float s2 = 4f * q0q0 * q.y + _2q0 * ax + _4q2 * q3q3 - _2q3 * ay - _4q2 + _8q2 * q1q1 + _8q2 * q2q2 + _4q2 * az;
        float s3 = 4f * q1q1 * q.z - _2q1 * ax + 4f * q2q2 * q.z - _2q2 * ay;

        norm = Mathf.Sqrt(s0 * s0 + s1 * s1 + s2 * s2 + s3 * s3); // Normalize step magnitude
        norm = 1.0f / norm; // Use reciprocal for division
        s0 *= norm;
        s1 *= norm;
        s2 *= norm;
        s3 *= norm;

        // Apply feedback step
        float qDot1 = 0.5f * (-q.x * gx - q.y * gy - q.z * gz) - beta * s0;
        float qDot2 = 0.5f * (q.w * gx + q.y * gz - q.z * gy) - beta * s1;
        float qDot3 = 0.5f * (q.w * gy - q.x * gz + q.z * gx) - beta * s2;
        float qDot4 = 0.5f * (q.w * gz + q.x * gy - q.y * gx) - beta * s3;

        // Integrate rate of change of quaternion to yield quaternion
        q.w += qDot1 * deltaTime;
        q.x += qDot2 * deltaTime;
        q.y += qDot3 * deltaTime;
        q.z += qDot4 * deltaTime;

        // Normalize quaternion
        norm = Mathf.Sqrt(q.w * q.w + q.x * q.x + q.y * q.y + q.z * q.z);
        norm = 1.0f / norm;
        q.w *= norm;
        q.x *= norm;
        q.y *= norm;
        q.z *= norm;

        return q;
    }
}
