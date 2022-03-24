int led_pin = 8;
int push_btn = 12;
int led_state = 0;
int btn_state = 0; //버튼의 혀냊 상태 값을 저장하는 변수 - 0, 1
void setup() {
  Serial.begin(9600);
  pinMode(push_btn,INPUT);
  pinMode(led_pin,OUTPUT);  
}

void loop() {
  delay(500);
  // 입력핀으로 설정한 12번 핀읜 입력된 현재 값을 읽어서 btn_state에 저장하기
  btn_state = digitalRead(push_btn);
//  Serial.println(btn_state);
  Serial.println(btn_state);
  if(btn_state == HIGH) {
    if(led_state == 0){
      digitalWrite(led_pin,HIGH);
      led_state = 1;// led의 상태값을 다시 설정
      Serial.println("led_on:");
      
    }else {
      digitalWrite(led_pin,LOW);
      led_state = 0;
      Serial.println("led_off:");
      
    }
  }
}
