#include <LiquidCrystal.h>
#include "DHT.h"
#define DHTTYPE DHT11
#define DHTPIN A0
DHT mydhtll (DHTPIN,DHTTYPE); //DHT11 객체 생성
LiquidCrystal lcd(12,11,4,5,6,7);
void setup() {
  lcd.begin(16,2);
  mydhtll.begin();
}

void loop() {
  lcd.setCursor(0,0); // 열, 행
  float humidityVal = mydhtll.readHumidity(); // 습도 측정
  float temp_val = mydhtll.readTemperature(); // 섭씨온도측정
  lcd.print("hd : ");
  lcd.print(humidityVal);
  lcd.setCursor(0,1); // 열, 행
  lcd.print("temp : ");
  lcd.print(temp_val);
}
