const int led_pin[6] = {4,7,8,11,12,13};        //전면 LED 핀번호
const int sensor_pin[6] = {A0,A1,A2,A3,A4,A5};  //적외선 센서 핀번호
const int ir_led = 10;  //적외선 LED 핀번호
const int LMOTOR = 5;   //왼쪽 모터 핀번호
const int RMOTOR = 6;   //오른쪽 모터 핀번호
  
const int sensorRef[6]={        //라인 검출 기준값
  600,600,600,600,600,600
};
int sensorValue[6]; //적외선 센서값을 저장할 변수 
  
  
void setup()
{
  Serial.begin(9600);
    
  pinMode(LMOTOR,OUTPUT);   //LEFT MOTOR핀 출력으로 설정
  pinMode(RMOTOR,OUTPUT);   //RIGHT MOTOR핀 출력으로 설정
  pinMode(ir_led , OUTPUT); //적외선 LED핀 출력으로 설정
  
  for(int i=0 ; i<6 ; i++)
    pinMode(led_pin[i],OUTPUT); //전면 LED핀 출력으로 설정  
    
  analogWrite(LMOTOR,0);    //LMOTOR 정지
  analogWrite(RMOTOR,0);    //RMOTOR 정지
    
  delay(1000);  // 1초 정지
}
  
void loop()
{
  // 센싱 시작
  digitalWrite(ir_led,HIGH);    //적외선 LED 켜기
  delay(1);                     //1ms 지연
  for(int i=0 ; i<6 ; i++)  
  {
    sensorValue[i] = analogRead(sensor_pin[i]); //적외선 센서값을 sensorValue 변수에 저장    
  }
  digitalWrite(10,LOW);         //적외선 LED 끄기
  // 센싱 끝
  
    
  for(int i=0 ; i<6 ; i++)
  {
    Serial.print(sensorValue[i]);  //센서값 시리얼 모니터로 출력
    Serial.print("  ");
  }
  Serial.println("");
    
  for(int i=0 ; i<6 ; i++)
  {
    if(sensorValue[i] < sensorRef[i])    digitalWrite(led_pin[5-i],HIGH);    //라인이 감지되면 전면 LED 켜기
    else                                 digitalWrite(led_pin[5-i],LOW);     //라인이 감지되지 않으면 전면 LED 끄기
  }
   
  // 알고리즘 시작
  if((sensorValue[2] < sensorRef[2]) && (sensorValue[3] < sensorRef[3]))  //중간 2개의 센서에 라인이 감지된 경우(A2 A3)
  {
    analogWrite(LMOTOR,120);
    analogWrite(RMOTOR,120);  
  }
  else if(sensorValue[0] < sensorRef[0])  // 맨 오른쪽 센서(A0)에 라인이 감지된 경우
  {
    analogWrite(LMOTOR,20);
    analogWrite(RMOTOR,120);    
  }
  else if(sensorValue[5] < sensorRef[5])  // 맨 왼쪽 센서(A5)에 라인이 감지된 경우
  {
    analogWrite(LMOTOR,120);
    analogWrite(RMOTOR,20);
  }
  else if(sensorValue[1] < sensorRef[1])  // 오른쪽에서 두 번째 센서(A1)에 라인이 감지된 경우
  {
    analogWrite(LMOTOR,50);
    analogWrite(RMOTOR,110);    
  }
  else if(sensorValue[4] < sensorRef[4])  // 왼쪽에서 두 번째 센서(A4)에 라인이 감지된 경우
  {
    analogWrite(LMOTOR,110);
    analogWrite(RMOTOR,50);
  }
  else if(sensorValue[2] < sensorRef[2]) // 오른쪽에서 세 번째 센서(A3)에 라인이 감지된 경우
  {    
    analogWrite(LMOTOR,60);
    analogWrite(RMOTOR,100);
  }
  else if(sensorValue[3] < sensorRef[3])  // 왼쪽에서 세 번째 센서(A2)에 라인이 감지된 경우
  {
    analogWrite(LMOTOR,100);
    analogWrite(RMOTOR,60);
  }
  else                                    // 라인이 감지가 되지 않는다면 멈춤
  {
    analogWrite(LMOTOR,0);
    analogWrite(RMOTOR,0);
  }
  //알고리즘 끝
   
  delay(30);
}
