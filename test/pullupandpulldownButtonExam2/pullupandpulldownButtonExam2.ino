int push_btn2 =8;
int push_state2 = 0;

int push_btn = 12;
int btn_state =0;
int led_state=0;
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
  Serial.println(push_state2);
    btn_state = digitalRead(push_btn);
    Serial.println(btn_state);
 if(btn_state == HIGH) {
    if(led_state == 0){
      digitalWrite(led_pin,HIGH);
      led_state = 1;// led의 상태값을 다시 설정
      Serial.println("led_on:");
    }
 }
 if(push_state2 == LOW) {
  if(led_state == 1) {
      digitalWrite(led_pin,LOW);
      led_state = 0;// led의 상태값을 다시 설정
      Serial.println("led_off:");
  }
 }
}
