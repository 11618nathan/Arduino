//온도 경보 장치 프로그램


const int sensorPin=0; //아날로그 입력 0번 핀을 사용하는 온도 센서 TEMP 상수 정의

const int LowerTemp = 155; //온도 하한값(18C)을 정의한 LOWER_BOUND 상수 정의
const int UpperTemp = 160; //온도 상한값(23C)을 정의한 UPPER_BOUND 상수 정의

int sensorVal=0; //온도 센서의 현재값을 저장하는 val 변수 선언

void setup()
{
    pinMode(2, OUTPUT); //RED를 출력으로 지정
    pinMode(3, OUTPUT); //GREEN를 출력으로 지정
    pinMode(4, OUTPUT); //BLUE를 출력으로 지정
}
void loop()
{
    sensorVal=analogRead(sensorPin);

    if(sensorVal < LowerTemp)
    {
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
    }
    else if(sensorVal > UpperTemp)
    {
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
    }
    else
    {
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
    }
}

