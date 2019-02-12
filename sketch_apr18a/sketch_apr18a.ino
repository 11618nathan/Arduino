//LCD 텍스트와 증가하는 숫자
//LCD 라이브러리 삽입
#include <LiquidCrystal.h>
//시작 시간값을 0으로 설정
int time=0;
//회로에 연결된 핀 번호를 사용하여 lcd 객체 인스턴스 생성
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
void setup()
{
//LCD의 행과 열을 16행 2열로 설정
lcd.begin(16, 2);
//LCD에 문자열 출력
lcd.print("Count");
}
void loop()
{
//커서를 2열 1행으로 이동
lcd.setCursor(0,1);
//현재 시간값(초기값 0)을 출력
lcd.print(time);
//1초간 대기
delay(1000);
//시간값을 1 증가
time++;
}

