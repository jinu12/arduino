// 입력된 문자가 "A'이면 "ok", "a"이면 "fail" char형 변수를 선언

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  char data = 0; 
  if(Serial.available()) {
    data = Serial.read();
    Serial.print(data);
    if(data == 'A') {
    Serial.println("ok");
    }else if(data == 'a') {
      Serial.println("fail");
    } else {
      Serial.println("etc");
    }
  }
}
