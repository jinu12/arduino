int time = 1000;
int led4 = 10;
void setup() {
  pinMode(led4, OUTPUT);
}

void loop() {
  digitalWrite(led4,1);
  delay(9);
  digitalWrite(led4,0);
  delay(9);  
}
