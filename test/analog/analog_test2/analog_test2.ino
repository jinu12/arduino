// PWM테스트 - pulse width modulation
// 아날로그를 디지털신호로 바꾸기 위한 방법
// pwm은 8bit를 사용 - 2의 8승이니싹 256까지 즉, 0부터 255까지 표현이 가능
// AnalogDigitalConverter(ADC) - 10bit(2의 10승 - 1024)
int led4 = 11;
void setup() {
  pinMode(led4, OUTPUT);
}

void loop() {
  // 0부터 255까지 셋팅되고 255가 넘으면 다시 0부터 작업이 처리
  // 밝아졌다가 어두워지는 모든 값들을 적용
  for(int i= 0;i<256;i++) {
    analogWrite(led4,i);
    delay(10);
  }
  for(int i = 255; i>=0;i--) {
    analogWrite(led4,i);
    delay(10);
  }
}
