void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    String myvalue = Serial.readString();
    Serial.println(myvalue);
    if(myvalue=="arduino") {
      Serial.println("login");
    }else {
      Serial.println("logout");
    }
  }

}
