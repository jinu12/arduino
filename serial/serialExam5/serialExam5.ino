void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()) {
    int num1 = Serial.parseInt();
    int num2 = Serial.parseInt();
    int result = num1 + num2;
    Serial.println(num1);
    Serial.println(num2);
    Serial.println(result);
  }

}
