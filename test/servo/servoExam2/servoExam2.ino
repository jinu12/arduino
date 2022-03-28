#include <Servo.h>
int btn_state = 0;
int angle_state = 0;
int plusstate = 0;
int angle_minus = 180;
Servo myservo;
void setup() {
  myservo.attach(10);
  pinMode(8,INPUT);
  Serial.begin(9600);
  pinMode(6,INPUT);
}

void loop() {
  int readValue = analogRead(A0);
  int plusstate = digitalRead(8);
  int minusstate = digitalRead(6);
  int convertValue = map(readValue,0,1023,0,180);
  myservo.write(convertValue);
  plusButton();
  minusButton();
  int minus_state = digitalRead(6);
  Serial.println(minus_state);
}
void plusButton() {
  int plusstate = digitalRead(8);
  if(plusstate == HIGH) {
  if(btn_state == 0) {
      angle_state = angle_state + 20;
      myservo.write(angle_state);
  }
 } 
}
void minusButton() {
  int minus_state = digitalRead(6);
  if(minus_state == HIGH) {
  if(btn_state == 0) {
      angle_minus = angle_minus - 20;
      myservo.write(angle_minus);
  }
 } 
}
