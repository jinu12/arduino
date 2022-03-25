int time = 1000;
void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
  int pin2state = digitalRead(2);
  Serial.println(pin2state);
  int readValue = analogRead(A0);
  // 평가할 기준이 되는 변수, 변수의 최소값, 변수의 최대값, 적욕할 값의 최솟값, 적용하 값의 최대값
  //                      -------------------------------------------------------
  //                      실제 변수가 갖는 값의 범위    변활할 값의 범위
  int convertValue = map(readValue,0,1023,0,255);
//  Serial.println(convertValue);
  analogWrite(11,convertValue);
  delay(100);
}
