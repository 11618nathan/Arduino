#include <LiquidCrystal.h> //LCD 라이브러리 사용 선언
LiquidCrystal lcd(2, 3, 4, 5, 6, 7); //RS,E,DB4,DB5,DB6,DB7
int sensorPin = A0;
void setup()
{
lcd.begin(16, 2); //LCD 초기화
}
void loop ()
{
int val = analogRead(sensorPin); //TMP 센서로부터 불러온 값을 val변수에 저장
//float volt = val*5/1024.; //val값을 volt로 변환
//float temp = (volt-0.5)*100.; //섭씨온도로 변환
lcd.clear(); //LCD 화면 클리어
lcd.print("Current Temp"); //LCD화면 첫줄에 표시
lcd.setCursor(0, 1) ; //LCD에 표시할 위치를 2번째 줄 맨앞으로 이동
lcd.print(val); //온도의 정수값표시
delay(2000); //2초간 지연. 새로운 온도값을 2초마다 불러오게 됨
}

