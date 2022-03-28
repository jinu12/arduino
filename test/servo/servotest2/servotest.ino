#include <Servo.h>
Servo myservo;
void setup() {
  myservo.attach(10);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int readValue = analogRead(A0);
  int convertValue = map(readValue,0,1023,0,180);
  Serial.println(readValue);
  myservo.write(convertValue);
//  for(int angle=0;angle<=180;angle++){
//    myservo.write(angle);
//    delay(10);
//  }
  

}
