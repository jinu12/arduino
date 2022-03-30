#include <LiquidCrystal.h>
// LiquidCrystal (rs, enable, d4,d5,d6,d7
LiquidCrystal lcd(12,11,4,5,6,7);

void setup() {
  // LCD 초괴화 start
  // 가로 두 줄, 세로로 16글자를 표현할 수 있다.
  lcd.begin(16,2);
  lcd.print("hello");
}

void loop() {
  // lcd.print("123456789");
  // lcd.print("한글"); - 지원되지 않는다.
  lcd.setCursor(0,1); // 열, 행
                      // 열 - 16글자 (0~15), 행 - 2라인(0 ~ 1)
  // for(int i=1;i<=9;i++) {
  //  lcd.print(i);
  //  delay(500);
  // }
  delay(1000);
  
  

}
