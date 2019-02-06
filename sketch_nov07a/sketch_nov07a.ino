// 헤더파일 – 미리 작성된 소스 코드를 가져옴. 사용자 편의 및 활용
#include <Ultrasonic.h> 

// (Trig핀, Echo핀, 최대거리 단위는 us) 즉 30000us = 약 5미터
Ultrasonic sensor(9,8,30000); 

//거리를 저장할 변수를 선언합니다.
int distance = 0; 

// 아두이노 동작 후 한 번 실행
void setup() {

//시리얼포트를 초기화합니다.
Serial.begin(9600); 
  
}

// 아두이노 작동 후 반복 실행되는 부분
void loop() {
  // 거리를 측정하고 distance 변수에 저장합니다
distance = sensor.Ranging(CM);.

// "Distance "를 시리얼모니터에 출력합니다.
Serial.print("Distance "); 

// distance 변수에 저장된 값을 출력합니다.
Serial.print(distance); 

// 센티미터 단위를 출력합니다.
Serial.println(" cm"); 

// 2초간 딜레이를 한 후에 다시 반복합니다.
  delay (2000); 
  
}

