int sensorValue;
int pitch;
int sensorLow = 700;
int sensorHigh = 1000;
void setup()
{
Serial.begin(9600);
}
void loop(){
sensorValue = analogRead(A0);
Serial.println("Value= " + (String)sensorValue);
pitch = map(sensorValue, sensorLow, sensorHigh, 31, 4978); // map 중욭ㅇㄹ
tone(9, pitch, 20);
delay(10);
}
