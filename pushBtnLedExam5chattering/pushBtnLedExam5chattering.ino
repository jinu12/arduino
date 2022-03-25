int led_pin = 10;
int push_btn = 12;// 풀다운으로 처리한 스위치의 입력 핀
// 여러 가지 상태값을 저장할 변수
int btn_state; // push 버튼의 현재 상태값을 저장하는 변수 
boolean led_state; // boolean으로 led의 상태를 정의
boolean lastBtnState = 0; // push 버튼의 마지막 상태값을 저장할 변수
long lastTime = 0; // 스위치가 눌려진 시점의 시간을 측정 - chattering 구간을 체크하기 위해서 필요
void setup() {
  Serial.begin(9600);
  pinMode(push_btn,INPUT);
  pinMode(led_pin,OUTPUT);
}

void loop() {
  // 입력핀으로 설정한 13번 핀의 입력된 현재 값을 읽어서 저장
  // 1. 디지털핀의 입력된 값을 읽기
  int read_data = digitalRead(push_btn);
  // 2. 스위치의 이전 상태가 지금과 다르면 작업한 시점의 milli초를 기록
  // push버튼이 눌려지면 현재상태를 파악해서 이전과 다른 값인 경우 push 버튼이 눌려진 시간을 기록한다.
  if(read_data != lastBtnState) {
    lastTime = millis(); // 1/1000초
  }
  if((millis()-lastTime>50)){ //최초로 측정된 시간보다 경과한 시간이 50정도면 chatering기간으로 인지
    Serial.println("=========================");
    if(read_data!=btn_state) {
      btn_state = read_data; // 스위치의 상태가 누른 값과 다르면 버튼의 상태값을 변수에 저장
      if(read_data == HIGH) {
        led_state = !led_state; //led의 상태값을 반전시켜서(true=>false, false=>true) 저장
      }
    }
  }
  digitalWrite(led_pin, led_state);
  lastBtnState = read_data;
}
