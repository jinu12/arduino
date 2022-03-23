int myarr[5][5] ={0};
void setup() {
  int value = 1;
  Serial.begin(9600);
  for(int row=0;row<5;row++) {
    for(int i=0;i<5;i++) {
      myarr[row][i] = value;
      value++;
    }
  }
}

void loop() {
  int size = sizeof(myarr)/sizeof(myarr[0]);
  int sum = 0;
  for(int row=0;row<size;row++) {
    for(int i=0;i<size;i++) {
      sum = sum + myarr[row][i];
    }
    Serial.print("총합");
    Serial.print(sum);
    Serial.print("평균");
    Serial.println(sum/size);
    sum = 0;
  }
  Serial.end();
}
