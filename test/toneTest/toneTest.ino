int melody[] = {262,294,330,349,440,494,523,0};
int count = 0;
int size = sizeof(melody)/sizeof(melody[0]);
void setup() {
  // 피에조부저에 진옫판이 있고 이 진동판이 진동될때 주파수가 활용(주파수는 미리 정의가 되어 있다. -237page)
  //                                        ----
  //                                        1초에 진동하는 횟수
  // 피에조부저는 전기적인 신호를 소리로 변환해주는 소자
  // tone(핀의 번호, 진동주파수, 진동을 발생시키는 시간)
}

void loop() {
  
  if(count > 3) {
    exit(0); 
    // noTone(7);
  }else {
    for(int i=0;i<size;i++) {
      tone(7,melody[i],1000);
      delay(1000);
    }
  }
  count = count + 1;
  
  
}
