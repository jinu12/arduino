#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,4,5,6,7);
void setup() {
  lcd.begin(16,2);
  lcd.print("hello");

}

void loop() {
  lcd.setCursor(0,1); // 열, 행
  lcd.print("Start");
  for (int positionCounter = 0; positionCounter < 22; positionCounter++) 
  {
    if(positionCounter < 11) {
      lcd.scrollDisplayRight();
      delay(500);
    }else {
      lcd.scrollDisplayLeft();
      delay(500);
    }
  }
}
