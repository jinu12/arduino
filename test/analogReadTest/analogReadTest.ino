led = 11;
void setup() {
  Serial.begin(9600);
  digtail

}

void loop() {
  int readValue = analogRead(A0);
  Serial.println(readValue);
}
