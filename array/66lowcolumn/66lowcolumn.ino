  int myarr[6][6] = {
    {1, 2, 3, 4, 5, 6},
    {7, 8, 9, 10, 11, 12},
    {13, 14, 15, 16, 17, 18},
    {19, 20, 21, 22, 23, 24},
    {25, 26, 27, 28, 29, 30},
    {31, 32, 33, 34, 35, 36},
  };
//  [0,1],[1,1],[2,1]
void setup() {
  Serial.begin(9600);
}

void loop() {
  int size = sizeof(myarr)/sizeof(myarr[0]);
  int rowSum = 0;
  int columnSum=0;
  
  for(int row=0;row<size;row++) {
    for(int i=0;i<size;i++) {
      rowSum = rowSum + myarr[row][i];
    }
  }
  for(int row=0;row<size;row++) {
    for(int i=0;i<size;i++) {
      rowSum = rowSum + myarr[i][row];
    }
  }
  Serial.print("행 합계 : ");
  Serial.println(rowSum);
  Serial.print("열 합계 : ");
  Serial.println(columnSum);
  Serial.end();
}
