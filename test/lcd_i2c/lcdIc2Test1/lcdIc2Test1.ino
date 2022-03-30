#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 20); // address, 열, 행
void setup() {
  lcd.begin(); // lcd 초기화
  lcd.print("hello jinu");
}

void loop() {
  lcd.setCursor(0,1);
  lcd.print("audino");
  
}
