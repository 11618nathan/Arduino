int ledPin = 11;
int sensorPin = 8;
void setup ()
{
pinMode(ledPin, OUTPUT) ;
pinMode(sensorPin, INPUT); //센서의 값 0(수평) or 1(기울어짐)
}
void loop()
{
int val = 0;
val = digitalRead(sensorPin);
if (val == HIGH) //센서의 값이 1이면(기울어지면) LED를 켠다
{
digitalWrite (ledPin, HIGH);
}
else
{
digitalWrite (ledPin, LOW);
}
delay(500);
}

