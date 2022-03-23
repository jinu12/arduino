int myarr[5] = {100,99,88,75,77};
void setup() {
  Serial.begin(9600);
}

void loop() {
  int size = sizeof(myarr)/sizeof(myarr[0]);
  int sum = 0;
  for(int i=0;i<size;i++){
    sum = sum + myarr[i];
  }
  int avg = sum / size;
  Serial.print("합계 : ");
  Serial.println(sum);
  Serial.print("평균 : ");
  Serial.println(avg);
  Serial.end();
}
