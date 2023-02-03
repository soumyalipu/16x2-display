#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin();
  lcd.backlight();
  lcd.clear();
  lcd.print("Tech For FUN");
  lcd.setCursor(0,1);
  lcd.print("Subscribe");
}

void loop() {
  // put your main code here, to run repeatedly:

}
