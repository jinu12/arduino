int myarr[5][5] ={
  {1 ,2 ,3 ,4 ,5},
  {6, 7, 8, 9, 10},
  {11, 12, 13, 14, 15},
  {16, 17, 18, 19, 20},
  {21, 22, 23, 24, 25}
};
void setup() {
  Serial.begin(9600);
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
