  int ledList[5] = {13,12,11,10,9};

void setup() {
    Serial.begin(9600);
}

void loop() {

    for(int i=0;i<=4;i++) {
    Serial.println(ledList[i]);
    delay(1000);
    
  }


}
