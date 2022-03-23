char pin;

void setup() {
  for(int i=8;i<=13;i++){
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()) {
    char pin = Serial.parseInt();
    led_on(pin);
  }
}

void led_on(int num) {
  led_allOff();
  digitalWrite(num, HIGH); 
}

void led_off(int num) {
  digitalWrite(num, LOW);
}

void led_allOff() {
  for(int i=8;i<=13;i++) {
     digitalWrite(i,LOW);  
  } 
}
