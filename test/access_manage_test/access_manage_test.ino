// 출입 관리 시스템

// 필요장비
// RFID, PIR센서, I2C ㅣㅊㅇ,ㅂ
#include <SPI.h>
#include <MFRC522.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

#define SS_PIN 10 // RFID
#define RESET_PIN 9 // RFID 리셋
#define PIR_PIN 7 // PIR
#define LED_PIN 3 // LED
#define SERVO_PIN 8 // 서브모터
#define INPUT_PIN 4 // push 버튼
#define A 440.0000 //삐소리
int angle = 0;
byte card_uid[] = {32,158,97,28};
bool checkTrue = false;
bool checkFalse = false;
MFRC522 rfid(SS_PIN,RESET_PIN); 
LiquidCrystal_I2C lcd(0x27, 16, 20); // address, 열, 행
Servo myservo;
void setup() {
  // 시리얼 통신과 SPI 통신을 초고히하며 start
  Serial.begin(9600);
  SPI.begin();
  // MFRC522 초기화
  rfid.PCD_Init();
  lcd.begin();
  pinMode(PIR_PIN,INPUT);
  pinMode(LED_PIN,OUTPUT);
  pinMode(INPUT_PIN,INPUT);
  myservo.attach(SERVO_PIN);
}

void loop() {
  come_close_people();  // 사용자가 접근할 때 실행되는 함수
  check_user();  // 미리 등록된 사용자 확인 함수
  push_door(); // push버튼 누를때 생기는 함수
}

void come_close_people(){
  int value = digitalRead(PIR_PIN);
//  Serial.println(value);
  if(value==1){
    lcd.print("come close people");
    lcd.setCursor(0,0);
    delay(1000);
  }else{
    lcd.print("no people");
    lcd.setCursor(0,0);
    delay(100);
  }
  lcd.clear();
}

void check_user() {
    if(!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) {
    delay(500);
    return;
  }
  Serial.print("카드의 Tag ID:");
  for(byte i=0;i<4;i++){
    if(card_uid[i]==rfid.uid.uidByte[i]){
    Serial.print(rfid.uid.uidByte[i]);
    Serial.print(" ");
    checkTrue = true; 
    }else{
     checkFalse = true; 
    }
  }
  if(checkTrue){
    lcd.print("Welcome");
    lcd.setCursor(0,0);
    angle = 90;
    myservo.write(angle);
    delay(1000);
  }
  if(checkFalse){
    digitalWrite(LED_PIN,HIGH);
    lcd.print("Wrong key");
    lcd.setCursor(0,0);
    tone(2,A);
    delay(1000);
    noTone(2);
  }
  digitalWrite(LED_PIN,LOW);
  checkTrue = false;
  checkFalse = false;
  myservo.write(angle);
  
}

void push_door(){
  int state = digitalRead(INPUT_PIN);
    if(digitalRead(INPUT_PIN) == HIGH) {  // open
    angle = 90;
    myservo.write(angle);
  }
  if(digitalRead(8) == HIGH) {  // close
    angle = 0;
    myservo.write(angle);
  }
  delay(100);
  int door_state = 0;
  Serial.print("state"); 
  Serial.println(state);
  if(state==1){
    if(door_state ==0) {
      angle = angle + 90;
      myservo.write(angle);
      door_state = 1;
    }else if(door_state ==0) {
      angle = 90;
      myservo.write(angle);
      Serial.println("close door");
      
    }
  }
}
