#include <SoftwareSerial.h>
// 블루투스 통신을 할 수 있는 SoftwareSerial 객체를 생성
SoftwareSerial myBTSerial(2,3); //SoftwareSerial(rxPin, txPin) 하드웨서는 반대로
char data;
String mystr="";
void setup() {
  Serial.begin(9600);
  myBTSerial.begin(9600);
  Serial.println("통신준비....");
  pinMode(8,OUTPUT);
}

void loop() {
  // 블루투스 모듈이 데이터를 읽을 준비를 할 수 있도록 delay
  delay(1000);
  while(myBTSerial.available()) {
    char myChar = myBTSerial.read();
    mystr = mystr + myChar;
  }

  if(mystr == "on") {
   Serial.print("on");
   digitalWrite(8,HIGH);
   delay(1000);
  }else if(mystr == "off") {
    digitalWrite(8,LOW);
  }

  mystr = ""; // mystr 초기화하기  

  if(Serial.available()){
    // 시리얼 통신으로 입력된 데이터를 블루투스로 출력
    myBTSerial.write(Serial.read());
  }
}
