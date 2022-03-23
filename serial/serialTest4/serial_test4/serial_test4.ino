
void setup() {
  
  Serial.begin(9600);
}

void loop() {
//  if(Serial.available()) {
//    num = Serial.read();
//    switch(num) {
//      case 1: 
//        Serial.print("test1");
//      case 2: 
//        Serial.print("test2");
//    }
//    }
  if(Serial.available()) {
    char num = 0;
    num = Serial.read();
    Serial.println(num);
    if(num>3){
      Serial.println("test1"); 
    }else {
      Serial.println("test2");
    }
  }

}
