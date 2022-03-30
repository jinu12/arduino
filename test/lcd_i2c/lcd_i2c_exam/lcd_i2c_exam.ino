#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 20); // address, 열, 행
byte char1[] = {
  B11111,
  B00001,
  B00001,
  B00001,
  B00001,
  B00001,
  B00001,
  B00000
};
byte char2[] = {
  B10001,
  B10001,
  B10001,
  B11111,
  B10001,
  B10001,
  B10001,
  B00000
};
byte char3[] = {
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B11111,
  B00000
};
byte char4[] = {
  B10000,
  B10000,
  B10000,
  B11111,
  B10000,
  B10000,
  B10000,
  B00000
};
byte char5[] = {
  B11111,
  B00001,
  B00001,
  B11111,
  B10000,
  B10000,
  B11111,
  B00000
};
byte char6[] = {
  B00001,
  B00001,
  B00001,
  B00001,
  B00001,
  B00001,
  B00001,
  B00000
};
void setup() {
  lcd.begin(); // lcd 초기화
}

void loop() {
  lcd.createChar(0,char1); // 문자 만들기
  lcd.createChar(1,char2);
  lcd.createChar(2,char3);
  lcd.createChar(3,char4);
  lcd.createChar(4,char5);
  lcd.createChar(5,char6);
  lcd.setCursor(0,0); // 문자를 출력할 위치를 설정
  lcd.write(0); // 만들어 놓기
  lcd.write(1);
  lcd.write(2);
  lcd.write(3);
  lcd.write(4);
  lcd.write(5);
}
