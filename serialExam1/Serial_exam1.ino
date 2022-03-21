// 입력된 값을 판단해서 입력된 문자가 100이상이면 "ok" 그렇지 않으면 "fail"메세지가 출력
void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()) {
    int myvalue = 0;
    myvalue = Serial.read();
    Serial.print(myvalue);
    if(myvalue >= 100) {
      Serial.println("ok");
    }else {
    Serial.println("fail");
    }
  }
}
