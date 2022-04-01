#include <SoftwareSerial.h>
// 블루투스 통신을 할 수 있는 SoftwareSerial 객체를 생성
SoftwareSerial myBTSerial(2,3); //SoftwareSerial(rxPin, txPin) 하드웨서는 반대로
void setup() {
  Serial.begin(9600);
  myBTSerial.begin(9600);
}

void loop() {
  // 블루투스 통신을 실행
  if(myBTSerial.available()) {
    // 블루투스 통신을 통해 읽은 데이터를 시리얼모니터 출력
    Serial.write(myBTSerial.read());
  }
  // 시리얼 통신으로 수신된 데이터가 있으면
  if(Serial.available()){
    // 시리얼 통신으로 입력된 데이터를 블루투스로 출력
    myBTSerial.write(Serial.read());
  }
  
}
