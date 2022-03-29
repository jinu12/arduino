#include "DHT.h"
#define DHTTYPE DHT11
#define DHTPIN A1
DHT mydhtll (DHTPIN,DHTTYPE); //DHT11 객체 생성
void setup() {
  Serial.begin(9600);
  mydhtll.begin();
}

void loop() {
  float humidityVal = mydhtll.readHumidity(); // 습도 측정
  float temp_val = mydhtll.readTemperature(); // 섭씨온도측정
  float f_temp_val = mydhtll.readTemperature(true); // 화씨온도측정 
  if(isnan(humidityVal) || isnan(temp_val) || isnan(f_temp_val) ) {
    Serial.println("Fail");
    return;// 현재작업종료
  }
  Serial.print("humidityVal");
  Serial.print(humidityVal);
  Serial.print("%\t");
  Serial.print("temp_val");
  Serial.print(temp_val );
  Serial.print("C\t");
  Serial.print("f_temp_val");
  Serial.print(f_temp_val);
  Serial.print("F\t");
  Serial.println("=========================");
}
