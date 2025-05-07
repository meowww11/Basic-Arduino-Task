#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(9600);
  Serial.println("I2C scan start");
}

void loop() {
  for (byte add = 1; add < 127; add++) {
    Wire.beginTransmission(add);
    if (Wire.endTransmission() == 0) {
      Serial.print("I2C found at 0x");
      Serial.println(add, HEX);
    }
  }
  delay(5000); // wait 5 sec
}
