void setup() {
  Serial.begin(9600);
}

void loop() {
  char data = 0;
  if(Serial.available()) {
    data = Serial.read();
    Serial.print(data);
    if(data == '1' || data == '3') {
      Serial.print("남자");
    }
    else if(data == '2' || data == '4') {
      Serial.print("여자");
    }else {
      Serial.print("기타");
    }
  }
}
