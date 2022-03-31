// RFID
#include <SPI.h>
#include <MFRC522.h>

// Slave와 통신할 수 있도록 ss핀과 reset핀을 셋팅하고 MFRC522클래스를 생성
#define SS_PIN 10
#define RESET_PIN 9
byte card_uid[] = {32,158,97,28};
MFRC522 rfid(SS_PIN,RESET_PIN); 
void setup() {
  // 시리얼 통신과 SPI 통신을 초고히하며 start
  Serial.begin(9600);
  SPI.begin();
  // MFRC522 초기화
  rfid.PCD_Init();
}

void loop() {
  // 태그가 접촉되지 않거나 ID 가 읽히지 안흔 경우 체크
  // PICC_IsNewCardPresent() - > 태그가 접촉되면 1을 리턴
  // PICC_ReadCardSerial() -> 
  if(!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) {
    delay(500);
    return;
  }
  // 태그의 id를 출력
  // -> 태그의 고유ID(UID)
  //    UID는 식별자 - 장비를 식별하기 위해서 사용하는 값
  //                 4가지 숫자가 조합
  //                 MFRC522라이브러리의 접근할 수 있는 uid 객체의 uidByte 배열에 저장되어 있다.
  Serial.print("카드의 Tag ID:");
  for(byte i=0;i<4;i++){
    if(card_uid[i]==rfid.uid.uidByte[i]){
    Serial.print(rfid.uid.uidByte[i]);
    Serial.print(" "); 
    }else{
      Serial.print("일치하는 카드가 아닙니다.");
    }
  }
  Serial.println();
  delay(1000);
  

}
