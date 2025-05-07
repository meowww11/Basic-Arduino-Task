#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // 0x27 be lcd addr

void setup() {
  lcd.init();
  lcd.backlight(); // backlight on
  lcd.setCursor(0, 0);
  lcd.print("Dishana");
}

void loop() {
}
