int push_btn2 =8;
int push_state2 = 0;
int push_btn = 12;
int btn_state =0;
int led_pin= 10;
void setup() {
  Serial.begin(9600);
  pinMode(push_btn,INPUT);
  pinMode(led_pin,OUTPUT);
  pinMode(push_btn2,INPUT);
}

void loop() {
  // 입력핀으로 설정한 12번 핀읜 입력된 현재 값을 읽어서 btn_state에 저장하기
  push_state2 = digitalRead(push_btn2);
    btn_state = digitalRead(push_btn);
 if(btn_state == HIGH) {
      digitalWrite(led_pin,HIGH);
 }
 if(push_state2 == LOW) {
      digitalWrite(led_pin,LOW);
 }
}
