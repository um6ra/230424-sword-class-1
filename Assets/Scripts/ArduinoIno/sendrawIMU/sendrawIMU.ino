#include <Arduino_BMI270_BMM150.h>

// Create sensor instance
//Arduino_BMI270_BMM150 IMU;

unsigned long lastUpdateTime = 0; // For non-blocking delay
const long updateInterval = 100;  // Update every 100 milliseconds

const float ax_offset = 0.024, ay_offset = 0.0, az_offset = 0.013;
const float gx_offset = -0.24, gy_offset = 0.24, gz_offset = 0.08;

// Hard iron offsets for magnetometer
float mx_offset = -20, my_offset = 9.04, mz_offset = -11.57;

float soft_iron_matrix[3][3] = {
  {1.05, 0.02, 0.01},
  {0.02, 0.95, -0.03},
  {0.01, -0.03, 1.10}
};

float magnetic_declination = 3.09;


void setup() {
  Serial.begin(115200);
  while (!Serial);

  if (!IMU.begin()) {
    Serial.println("F"); // Simple error indicator
    while (1);
  }
}

void loop() {


  // Non-blocking delay pattern
 unsigned long currentTime = millis();
 if (currentTime - lastUpdateTime > updateInterval) {
    lastUpdateTime = currentTime;

    float ax, ay, az, gx, gy, gz, mx, my, mz;
    float mx_corrected, my_corrected, mz_corrected;

    if (IMU.readAcceleration(ax, ay, az) && 
        IMU.readGyroscope(gx, gy, gz) && 
        IMU.readMagneticField(mx, my, mz)) {

        ax -= ax_offset;
        ay -= ay_offset;
        az -= az_offset;

        // Apply gyroscope offsets
        gx -= gx_offset;
        gy -= gy_offset;
        gz -= gz_offset;

        mx = mx - mx_offset;
        my = my - my_offset;
        mz = mz - mz_offset;

     mx_corrected = soft_iron_matrix[0][0] * mx + soft_iron_matrix[0][1] * my + soft_iron_matrix[0][2] * mz;
    my_corrected = soft_iron_matrix[1][0] * mx + soft_iron_matrix[1][1] * my + soft_iron_matrix[1][2] * mz;
     mz_corrected = soft_iron_matrix[2][0] * mx + soft_iron_matrix[2][1] * my + soft_iron_matrix[2][2] * mz;


    //float heading = atan2(my_corrected, mx_corrected);
    //heading += magnetic_declination * (PI / 180);  // Convert declination to radians

    
          
      // Construct a compact data string
      Serial.print(ax, 4); Serial.print(',');
      Serial.print(ay, 4); Serial.print(',');
      Serial.print(az, 4); Serial.print(',');
      Serial.print(gx, 4); Serial.print(',');
      Serial.print(gy, 4); Serial.print(',');
      Serial.print(gz, 4); Serial.print(',');
      Serial.print(mx_corrected*0.1, 4); Serial.print(',');
      Serial.print(my_corrected*0.1, 4); Serial.print(',');
      Serial.println(mz_corrected*0.1, 4); // End with newline to mark data packet end
    } else {
      Serial.println("E"); // Simple error message for failed reads

    }
   }
  }
