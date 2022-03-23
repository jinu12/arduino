void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);

}
void loop() {
  
  // ex) 조도센서를 연결해서 어두이면 led가 켜지고 밝으면 led가 꺼지도록 설정.. 온도,모션,초음파센서
  //2. 1초에 한 번씩 led가 on, led가 off
  //     디지털신호를 출력할 때 사용할 함수는 digitalWrite
  digitalWrite(13, HIGH); // HIGH - > led가 on
  delay(1000);
  digitalWrite(12, HIGH); // HIGH - > led가 on
  delay(1000);
  digitalWrite(11, HIGH); // HIGH - > led가 on
  delay(1000);
  digitalWrite(10, HIGH); // HIGH - > led가 on
  delay(1000);
  digitalWrite(9, HIGH); // HIGH - > led가 on
  delay(1000);
  digitalWrite(9, LOW); // LOW - > led가 off
  delay(1000);
  digitalWrite(10, LOW); // LOW - > led가 off
  delay(1000);
  digitalWrite(11, LOW); // LOW - > led가 off
  delay(1000);
  digitalWrite(12, LOW); // LOW - > led가 off
  delay(1000);
  digitalWrite(13, LOW); // LOW - > led가 off
  delay(1000);
  
}
