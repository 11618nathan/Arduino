//오음음계 피아노
//음계 : 도 레 미 솔 라
#define NOTE_C 262 //'도'음 정의
#define NOTE_D 294 //'레'음 정의
#define NOTE_E 330 //'미'음 정의
#define NOTE_G 392 //'솔'음 정의
#define NOTE_A 440 //'라'음 정의
const int SPEAKER=9; //9번 핀을 사용하는 SPEAKER 상수 정의
const int BUTTON_C=7; //7번 핀을 사용하는 도 버튼 BUTTON_C 상수 정의
const int BUTTON_D=6; //6번 핀을 사용하는 레 버튼 BUTTON_D 상수 정의
const int BUTTON_E=5; //5번 핀을 사용하는 미 버튼 BUTTON_E 상수 정의
const int BUTTON_G=4; //4번 핀을 사용하는 솔 버튼 BUTTON_G 상수 정의
const int BUTTON_A=3; //3번 핀을 사용하는 라 버튼 BUTTON_A 상수 정의

void setup()
{
//모든 입출력 핀의 기본값은 입력이므로 setup() 함수에서 처리할 것이 없음
//tone() 함수는 출력 제어
}
void loop()
{
while(digitalRead(BUTTON_C))
tone(SPEAKER, NOTE_C);
while(digitalRead(BUTTON_D))
tone(SPEAKER, NOTE_D);
while(digitalRead(BUTTON_E))
tone(SPEAKER, NOTE_E);
while(digitalRead(BUTTON_G))
tone(SPEAKER, NOTE_G);
while(digitalRead(BUTTON_A))
tone(SPEAKER, NOTE_A);
//버튼을 누르지 않으면 음 재생을 멈춤
noTone(SPEAKER);
}
