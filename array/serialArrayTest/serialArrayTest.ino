  int myarr[3][4] = {
    {10,20,30,40},
    {50,60,70,80},
    {90,100,110,120}
  };
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(myarr[1][0]);
  Serial.print(",");
  Serial.println(myarr[2][2]);
  for(int row=0;row<3;row++) {
    for(int i=0;i<4;i++) {
      Serial.print(myarr[row][i]);
      Serial.print(",");  
    }
    Serial.println();
  }
  Serial.end();
}
