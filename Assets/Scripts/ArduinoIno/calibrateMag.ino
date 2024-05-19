#include <Arduino_BMI270_BMM150.h>

// Create sensor instance
//Arduino_BMI270_BMM150 IMU;

unsigned long lastUpdateTime = 0; // For non-blocking delay
const long updateInterval = 100;  // Update every 100 milliseconds

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
    if (IMU.readAcceleration(ax, ay, az) && 
        IMU.readGyroscope(gx, gy, gz) && 
        IMU.readMagneticField(mx, my, mz)) {

           Serial.print("Raw:");
      // Construct a compact data string
      Serial.print((int)(ax)); Serial.print(',');
      Serial.print((int)(ay)); Serial.print(',');
      Serial.print((int)(az)); Serial.print(',');
      Serial.print((int)(gx)); Serial.print(',');
      Serial.print((int)(gy)); Serial.print(',');
      Serial.print((int)(gz)); Serial.print(',');
      Serial.print((int)(mx*10)); Serial.print(',');
      Serial.print((int)(my*10)); Serial.print(',');
      Serial.print((int)(mz*10)); // End with newline to mark data packet end
      Serial.println();  
    } else {
      Serial.println("E"); // Simple error message for failed reads

    }

  }
}