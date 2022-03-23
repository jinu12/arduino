int myarr[] = {1,2,3,4,5};

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(sum(1,4));
  sum2(1,4);
  Serial.println(sumArray(myarr));
  getGrade(90);
  Serial.end();
}


int sum(int a,int b) {
  int sum = a + b;
  return sum;
}

void sum2(int a,int b) {
  int sum = a + b;
  Serial.println(sum);
}

int sumArray(int array[]){
//  int size = sizeof(array) / sizeof(array[0]);
//  int sum = size;
  int sum = 0;
  for(int i=0;i<5;i++) {
    sum = sum + array[i];
  }
 return sum;
}

int getGrade(int score){
  switch(score/10) {
    case 10:
    case 9:
      Serial.println("A");
      break;
    case 8:
      Serial.println("B");
      break;
    case 7:
      Serial.println("C");
      break;
    case 6:
      Serial.println("D");
      break;
    case 5:
      Serial.println("F");
      break;
    default :
      Serial.println("Error");
    
  }
  
}
