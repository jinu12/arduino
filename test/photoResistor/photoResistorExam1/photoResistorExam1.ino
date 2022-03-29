
void setup() {
 pinMode(9,OUTPUT);
 Serial.begin(9600);  
}

void loop() {
  int resitstorVal = analogRead(A0);
  Serial.println(resitstorVal);
  if(resitstorVal > 500) {
    digitalWrite(9,HIGH);
  }else {
    digitalWrite(9,LOW);
  }
  
  
  
}
