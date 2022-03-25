int time = 1000;
int led4 = 11;
void setup() {
  Serial.begin(9600);
  pinMode(led4, OUTPUT);
}

void loop() {
  int readValue = analogRead(A0);
  for(int i = 0;i<readValue;i++) {
    analogWrite(led4,i);
    delay(10);
  }

}
