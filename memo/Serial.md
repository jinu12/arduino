# Serial Bus (직렬 통신)

## 정의

하나의 신호선을 이용하여 데이터를 주고받는 통신을 일컬어 지칭

## 비동기식 통식 방식 사용

- 데이터 신호만을 보내고 가각의 방식에 따라 데이터 비트를 찾아냄

- 보통 한 문자 단위와 같이 매우 작은 비트 블럭의 앞과 뒤에 start 비트와 Stop 비트를 삽입하여 동기화하는 방식

- 일반적으로 비동기식 전송방식은 단순하고 저렴하나 각 문자당 Start 비트와 Stop 비트를 비롯해 2~3 비트의 오버헤드를 요구하므로 전송효율이 다소 떨어짐

- 보통 낮은 전송속도에서 이용

## 시리얼 모니터

아두이노와 컴퓨터간의 시리얼 통신은 시리얼 모니터를 사용

시리얼 모니터를 통해서 아두이노 보도의 센서 값을 확인하거나 아두이노 명령 보냄

## 통신 속도 설정하기

void begin(speed);

void begin(sespeed, config);

- speed 시리얼 통신 속도로 Baud Rate라고 하며 초당 전송되는 비트 수를 말함

- 단위는 bps(Bit Per Second)로 반드시 다음 값들중 하나로 설정

- 보통 9600을 많이 사용

* 아두이노에서는 300 ~ 2500000bps 까지 지원하지만, Serial 라이브러리는 115200bps를 초과하지 않도록 주의

* config 값을 지정하지 않으면 기본으로 Serial_8N1"이 설정

## 데이터 출력하기

size_t Serial.print(data, format);

size_t Serial.println(data, format);

## 수신된  데이터 확인하기

int Serial.available(void);

- 시리얼 포트에 수신되어 저장되어 있는 데이터의 바이트 수를 반환하는 함수

- 매개 변수 없음

- 반환 값 : 시리얼 포트 수신 데이터 버퍼에 저장된 데이터의 바이트 수

- 데이터를 받지 않았다면 0을 반환

- 시리얼 포ㅡ로 수신된 데이터는 64바이트까지 버퍼에 저장

## 데이터 읽어오기

int read(void);

- 시리얼 통신의 수신 버퍼에서 첫번째 문자를 읽어 반환

- 수신 버퍼가 비어 있으면 '-1'을 반환

## 시리얼 통신 종료하기

void Serial.end(void);
