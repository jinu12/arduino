void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    String myvalue = Serial.readString();
    Serial.println(myvalue);
    String myvalue2 = Serial.readString();
    Serial.println(myvalue2);
  }

}
