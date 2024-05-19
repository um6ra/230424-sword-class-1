#include <Arduino_BMI270_BMM150.h>

// Create sensor instance
//Arduino_BMI270_BMM150 IMU;

const long calibrationDuration = 60000;  // 60 seconds

float ax_offset = 0, ay_offset = 0, az_offset = 0;
float gx_offset = 0, gy_offset = 0, gz_offset = 0;
float mx_offset = 0, my_offset = 0, mz_offset = 0;

void setup() {
  Serial.begin(115200);
  while (!Serial);

  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1);
  }

  Serial.println("Starting calibration...");
  calibrateIMU();
  Serial.println("Calibration done!");
  
  // Print the calculated offsets
  Serial.print("Acc offsets: "); Serial.print(ax_offset, 4); Serial.print(", "); Serial.print(ay_offset, 4); Serial.print(", "); Serial.println(az_offset, 4);
  Serial.print("Gyro offsets: "); Serial.print(gx_offset, 4); Serial.print(", "); Serial.print(gy_offset, 4); Serial.print(", "); Serial.println(gz_offset, 4);
  Serial.print("Mag offsets: "); Serial.print(mx_offset, 4); Serial.print(", "); Serial.print(my_offset, 4); Serial.print(", "); Serial.println(mz_offset, 4);
}

void loop() {
  // Empty loop after calibration
}

void calibrateIMU() {
  unsigned long startTime = millis();
  unsigned long endTime = startTime + calibrationDuration;

  float ax_sum = 0, ay_sum = 0, az_sum = 0;
  float gx_sum = 0, gy_sum = 0, gz_sum = 0;
  float mx_sum = 0, my_sum = 0, mz_sum = 0;
  int count = 0;

  while (millis() < endTime) {
    float ax, ay, az, gx, gy, gz, mx, my, mz;

    if (IMU.readAcceleration(ax, ay, az) && 
        IMU.readGyroscope(gx, gy, gz) && 
        IMU.readMagneticField(mx, my, mz)) {
        
      ax_sum += ax;
      ay_sum += ay;
      az_sum += az;
      
      gx_sum += gx;
      gy_sum += gy;
      gz_sum += gz;
      
      mx_sum += mx;
      my_sum += my;
      mz_sum += mz;
      
      count++;
    }
    delay(10); // Short delay to allow sensor to update
  }

  // Calculate average offsets
  ax_offset = ax_sum / count;
  ay_offset = ay_sum / count;
  az_offset = az_sum / count;
  
  gx_offset = gx_sum / count;
  gy_offset = gy_sum / count;
  gz_offset = gz_sum / count;
  
  mx_offset = mx_sum / count;
  my_offset = my_sum / count;
  mz_offset = mz_sum / count;
}
