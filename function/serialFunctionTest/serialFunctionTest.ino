void setup() {
  Serial.begin(9600);
}

void loop() {
  show();
  show2(10);
  show2(20);
  show2(40);
  show2(30);
  show2(20);
  int result = test(10,20);
  Serial.println(result);
  Serial.end();

}
// 매개변수가 있고 return 값이 있는 함수
int test(int num1,int num2) {
  int result = num1 * num2;
  return result;
}

void show(){
  for(int i=1;i<=5;i++) {
    Serial.print("*");
  }
  Serial.println();
}
// 매개변수가 있는 함수
void show2(int count) {
  for(int i=1;i<=count;i++) {
    Serial.print("*");
  }
  Serial.println();
}

void arrtest(int myarrVal[5]){
  Serial.println(myarrVal[4]);
}
