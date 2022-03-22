void setup() {
    Serial.begin(9600);
}

void loop() {
  char aorb = "";
  if(Serial.available()){
    char aorb = Serial.read();
    switch(aorb) {
     case 'a':
      Serial.println("led_on");
      break;
     case 'b':
      Serial.println("led_off");
      break;
     default:
      Serial.println("restart");
    }
  }

}
