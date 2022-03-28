void setup() {
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int red = random(256);
  int green = random(256);
  int blue = random(256);
  delay(1000);
  analogWrite(6, blue);
  analogWrite(5, green);
  analogWrite(3, red);

}
