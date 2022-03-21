int num = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()) {
  num = Serial.parseInt();
  Serial.println(num);
  if(num>=90 && num<101){
    Serial.println("A"); 
  }else if(num >= 80 && num < 90) {
    Serial.println("B");
  }else if(num >= 70 && num < 80) {
    Serial.println("C");
  }else if(num >= 60 && num < 70) {
    Serial.println("D");
  }else if(num > 0 && num < 60){
    Serial.println("F");
    }
   else {
    Serial.println("error");
   }
  }
}
