int time = 1000;
int led4 = 11;
void setup() {
  Serial.begin(9600);
  pinMode(led4, OUTPUT);
}

void loop() {
  int readValue = analogRead(A0);
  if(readValue >= 500) {
    digitalWrite(led4,1);
  }else{
    digitalWrite(led4,1);
  }
}
