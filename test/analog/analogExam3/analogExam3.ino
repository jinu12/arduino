int pin_list[] = {11,4,7};
int size = sizeof(pin_list) / sizeof(pin_list[0]);
int led_state =0;
void setup() {
  Serial.begin(9600);
  for(int i=0;i<size;i++) {
    pinMode(pin_list[i], OUTPUT);  
  }
  pinMode(2,INPUT);
  pinMode(0,INPUT);
}

void loop() {
  int readValue = analogRead(A0);
  Serial.println(readValue);
  if(readValue >= 1 && readValue <=300){
    if(led_state==0) {
      digitalWrite(pin_list[0],1); 
    }
  }else if(readValue >= 301 && readValue <=700){
    if(led_state == 0) {
      digitalWrite(pin_list[1],1); 
    }
  }else if(readValue >= 700 && readValue <=1024) {
    if(led_state==0) {
      digitalWrite(pin_list[2],1); 
    }
  }
  alloff();
  allon();
}

void alloff(){
  int pushstate = digitalRead(2);
  if(pushstate == HIGH) {
  if(led_state == 0) {
      for(int i=0;i<size;i++) {
        digitalWrite(pin_list[i],LOW);  
      }
    led_state = 1;// led의 상태값을 다시 설정
    Serial.println("led_off:");
  }
 }
}
void allon() {
  int pushstate2 = digitalRead(0);
  if(pushstate2 == LOW) {
    if(led_state == 1) {
      for(int i=0;i<size;i++) {
        digitalWrite(pin_list[i],HIGH);  
      }
    led_state = 0;// led의 상태값을 다시 설정
    Serial.println("led_on:");
    }
 }
  
}
