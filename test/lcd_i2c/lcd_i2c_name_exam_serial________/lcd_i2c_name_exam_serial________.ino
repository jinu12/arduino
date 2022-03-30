#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 20); // address, 열, 행
byte char1[] = {
  0x01,
  0x1D,
  0x05,
  0x05,
  0x01,
  0x0E,
  0x0A,
  0x0E
};
byte char2[] = {
  0x01,
  0x1D,
  0x09,
  0x15,
  0x01,
  0x08,
  0x08,
  0x0E
};
byte char3[] = {
  0x0E,
  0x11,
  0x11,
  0x0E,
  0x00,
  0x1F,
  0x04,
  0x04
};


void setup() {
  lcd.begin(); // lcd 초기화
  Serial.begin(9600);
}

void loop() {
  lcd.createChar(0,char1); // 문자 만들기
  lcd.createChar(1,char2);
  lcd.createChar(2,char3);
  lcd.setCursor(0,0); // 문자를 출력할 위치를 설정
  for(int i=0;i<=2;i++) {
    lcd.write(i);
  }
  if(Serial.available()){
    lcd.setCursor(0,1);
    String result = Serial.readString();
    int result_size = result.length();
    lcd.print("input:");
    lcd.print(result);
    
    for(int i=0;i<10-result_size;i++){
      lcd.scrollDisplayRight();
      delay(500);
    }
    for(int i=10-result_size;i>0;i--){
      lcd.scrollDisplayLeft();
      delay(500);
    }
  }

}
