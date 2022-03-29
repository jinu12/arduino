#include <LiquidCrystal.h>
// LiquidCrystal (rs, enable, d4,d5,d6,d7
LiquidCrystal lcd(12,11,4,5,6,7);

void setup() {
  // LCD 초괴화 start
  // 가로 두 줄, 세로로 16글자를 표현할 수 있다.
  lcd.begin(16,2);

}

void loop() {
  lcd.setCursor(1,0);
  lcd.print("hello");

}
