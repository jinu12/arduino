
void setup() {
 pinMode(9,OUTPUT);
 Serial.begin(9600);  
}

void loop() {
  int resitstorVal = analogRead(A0);
  Serial.println(resitstorVal);
  int convertVal = map(resitstorVal,0,1023,0,255);
  analogWrite(9,convertVal);

  
  
  
}
