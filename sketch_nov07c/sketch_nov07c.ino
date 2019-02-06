#include <ControlMotor.h> // 라이브러리를 사용합니다.
// 아두이노 보드에서 사용할 핀을 설정합니다.
ControlMotor control(2,3,7,4,5,6); // 우측모터1,우측모터2,좌측모터1,좌측모터2,우측PWM,좌측PWM

int speed = 150; //모터속도를 저장할 변수를 선언합니다. 초기속도는 150입니다.

void setup() 
{
} 
 
void loop() 
{//한쪽 모터는 시계방향, 다른 모터는 반시계방향으로 회전합니다.
//따라서 자동차는 전진을 하게 됩니다. 속도는 점점 증가합니다.
 while(speed < 254){
 speed++;
 control.Motor(speed,1); 
 delay (200);}
//한쪽 모터는 반시계방향, 다른 모터는 시계방향으로 회전합니다.
//따라서 자동차는 후진을 하게 됩니다.
  control.Motor(-180,1);
  delay(3000);
//두 개의 모터가 시계방향으로 회전합니다.
//따라서 자동차는 왼쪽으로 회전합니다.
  control.Motor(200,100);
  delay(3000);
//두 개의 모터가 반시계방향으로 회전합니다.
//따라서 자동차는 오른쪽으로 회전합니다.
  control.Motor(200,-100);
  delay(3000);
//두 개의 모터가 정지합니다.
  control.Motor(0,1);
  delay(3000);
  
  speed = 150;//변수를 재설정합니다.
}

