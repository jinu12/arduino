void setup() {
    Serial.begin(9600);
}

void loop() {
  int i = 0;
  int sum = 0;
  int odd = 0;
  int add = 0;
    for(i =1; i<=100; i++) {
      sum = sum+ i;
      if(i % 2 == 0) {
        odd = odd + i;
      }else {
        add = add + i;
      }
    }
    Serial.println("==================");
    Serial.print("총합");
    Serial.println(sum);
    Serial.print("짝수");
    Serial.println(odd);
    Serial.print("홀수");
    Serial.println(add);

    Serial.end();

}
