
int push_btn = 12;
int btn_state = 0; //버튼의 혀냊 상태 값을 저장하는 변수 - 0, 1
void setup() {
  Serial.begin(9600);
  pinMode(push_btn,INPUT);
  int count = 0;  
}

void loop() {
  delay(1000);
  // 입력핀으로 설정한 12번 핀읜 입력된 현재 값을 읽어서 btn_state에 저장하기
  btn_state = digitalRead(push_btn);
  Serial.println(btn_state);
  }
