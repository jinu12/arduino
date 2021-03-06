/*
 * 전처리 부분 
 * -> 내부에서 사용할 라이브러리를 명시, 변수를 선언(핀번호 세팅)
 */

void setup() {
  // 아두이노로 업로드 되면 한 번만 실행되는 함수
  // 아두이노 내부에서 전기 신호가 들어오면 set up이 먼저 호출
    Serial.begin(9600);

}

void loop() {
  // 아두이노에서 동작할 소스코드를 명시
  // 전원이 들어오는 동안은 무한으로 반복해서 실행될 명령문
  // loop안에 특정한 상황이 발생하면 코드를 머추게 하거나 전원을 해제하지 않으면 끝까지 실행

}
