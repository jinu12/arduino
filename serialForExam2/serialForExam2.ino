void setup() {
    Serial.begin(9600);
}

void loop() {
  int input = 0;
  int sum = 0;
  int odd = 0;
  int add = 0;
  int i = 0;
  int result = 0;
    if(Serial.available()) {
    int input = Serial.parseInt(); 
      for(i =1; i<=9; i++) {
      Serial.print(input);
      Serial.print("*");
      Serial.print(i);
      Serial.print("=");
      result = input * i;
      Serial.println(result);
    }    
  }

}
