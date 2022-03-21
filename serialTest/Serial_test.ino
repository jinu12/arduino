void setup() {
  Serial.begin(9600);
}

void loop() {
  // 아두이노에 입력된 데이터를 읽어서 바로 출력하기
  // 데이터가 있으면 작업을 실행
  if(Serial.available()) { // 데이터 있으면 true
    Serial.println(Serial.read()); // 읽은 내용을 그대로 출력하기(ascii 코드값을 출력)
  }else {
    Serial.println("none");
    delay(1000);
  }

}
