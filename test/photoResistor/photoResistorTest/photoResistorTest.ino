
void setup() {
  Serial.begin(9600);  
}

void loop() {
  int resitstorVal = analogRead(A0);
  Serial.println(resitstorVal);
  delay(200);
  
  
}
