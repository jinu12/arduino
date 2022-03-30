#include <LiquidCrystal.h>
String data = "i love you baby";
int data_size = 0;
LiquidCrystal lcd(12,11,4,5,6,7);
void setup() {
  lcd.begin(16,2);
  data_size = data.length();
  lcd.print(data);
}

void loop() {
  for(int i=0;i<16-data_size;i++){
    lcd.scrollDisplayRight();
    delay(500);
  }
  for(int i=16-data_size;i>0;i--){
    lcd.scrollDisplayLeft();
    delay(500);
  }
}
