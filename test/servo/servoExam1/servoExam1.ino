#include <Servo.h>

Servo myservo;
void setup() {
  myservo.attach(10);
  Serial.begin(9600);
}

void loop() {
  int readValue = analogRead(A0);
  int plusstate = digitalRead(8);
  int minusstate = digitalRead(6);
  int convertValue = map(readValue,0,1023,0,180);
  myservo.write(convertValue);

}
