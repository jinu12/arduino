int ledList[] = {13,12,11,10,9};
void setup() {
    Serial.begin(9600);
  for(int i=0;i<=4;i++) {
    pinMode(ledList[i],OUTPUT);
  }
}
void loop() {
  for(int i=0;i<=4;i++) {
    Serial.print("배열 사이즈는 : ");
    Serial.println(sizeof(ledList) / sizeof(ledList[0]));
    digitalWrite(ledList[i],HIGH);
    delay(1000);
  }

  for(int i=4;i>=0;i--) {
    Serial.print("배열 사이즈는 : ");
    Serial.println(sizeof(ledList) / sizeof(ledList[0]));
    digitalWrite(ledList[i],LOW);
    delay(1000);
  }
  
}
