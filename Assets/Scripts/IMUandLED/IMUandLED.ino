#include <Arduino_BMI270_BMM150.h>
#include "MadgwickAHRS.h"
#include <Adafruit_NeoPixel.h>

// IMU and Filter Setup
Madgwick filter;
const float updateInterval = 99;  // Update every 99 milliseconds, sensorHz = 99

// NeoPixel Setup
#define LED_PIN     6
#define NUM_LEDS    20  
#define BRIGHTNESS  10

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  while (!Serial);

  if (!IMU.begin()) {
    Serial.println("F"); 
    while (1);
  }
  filter.begin(99);

  
  strip.begin();
  strip.setBrightness(BRIGHTNESS);
  strip.show(); 
  
  // Set all LEDs to red initially
  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(255, 0, 0)); // Red color
  }
  strip.show();
}

void loop() {
  float ax, ay, az, gx, gy, gz;
  float q0, q1, q2, q3;
  
  // Read IMU data
  if (IMU.accelerationAvailable() && IMU.gyroscopeAvailable()) {
    IMU.readAcceleration(ax, ay, az);
    IMU.readGyroscope(gx, gy, gz);

    float naz = az - 1; 
    filter.updateIMU(gx, -gy, -gz, ax, -ay, -naz);

    q0 = filter.getQuaternion0();
    q1 = filter.getQuaternion1();
    q2 = filter.getQuaternion2();
    q3 = filter.getQuaternion3();
      
    // Send quaternion data to Serial 
    Serial.print(q0);
    Serial.print(",");
    Serial.print(q1);
    Serial.print(",");
    Serial.print(q2);
    Serial.print(",");
    Serial.println(q3);
  }

  // Read commands from Unity to control LEDs
  if (Serial.available() > 0) {
    int percent = Serial.parseInt();
    lightPercentLeds(percent);
  }
}

void lightPercentLeds(int percent) {
  int ledsToLightinPercent = map(percent, 0, 100, 0, NUM_LEDS); //percent is a value from 0 to 100

  for (int i = 0; i < NUM_LEDS; i++) {
    if (i < ledsToLightinPercent) {
      strip.setPixelColor(i, strip.Color(0, 0, 255)); // Blue color for LED
    } else {
      strip.setPixelColor(i, strip.Color(0, 0, 0)); // Turn off the LED
    }
  }
  strip.show();
}
