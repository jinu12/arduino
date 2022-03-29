
void setup() {
  pinMode(3,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(3);
  Serial.println(value);
  if(value==1){
    digitalWrite(9,HIGH);
  }else{
    digitalWrite(9,LOW);
  }
  delay(100);
  
}
