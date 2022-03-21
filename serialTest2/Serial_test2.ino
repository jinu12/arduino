//변수를 선언하고 그 값들을 확인할 수 있도록 시리얼통신]
int inputdata = 0; //inputdata라는 변수는 정수형 데이터가 저장될 변수이고 0으로 초기화
void setup() {
  Serial.begin(9600);
}

void loop() {
//  int intdata = 65;
//  char chardata = 65;
//  float floatdata = 65;
//  Serial.println(intdata);
//  Serial.println(chardata);
//  Serial.println(floatdata);
  delay(1000);
  if(Serial.available()) {
    //시리얼통신으로 입력되는 데이터를 변수에 저장
    inputdata = Serial.read();
    Serial.write(inputdata); // 문자의 형태로 전송
    Serial.print(",");
    Serial.println(inputdata); // ascii로 전송
  }
}
