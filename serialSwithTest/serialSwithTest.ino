void setup() {
  Serial.begin(9600);
}

void loop() {
  char ssn = 0;
  if(Serial.available()){
    char ssn = Serial.read();
    switch(ssn) {
      case '1' :
      case '3' :
        Serial.println("남자");
        break;
      case '2' :
      case '4' :
        Serial.println("여자");
        break;
      default:
        Serial.println("기타");
    }
  }

}
