#include <Servo.h>
int angle = 90;
Servo myservo;
void setup() {
  myservo.attach(10);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(6) == HIGH) {  // + 버튼
    angle = angle + 20;
    if(angle>180) {
      angle =180;
    }
    myservo.write(angle);
  }
  if(digitalRead(8) == HIGH) {  // + 버튼
    angle = angle - 20;
    if(angle<0) {
      angle =0;
    }
    myservo.write(angle);
  }
  delay(100);
}
