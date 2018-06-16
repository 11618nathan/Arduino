int val = 0;
int aout=0;
void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop() 
{
  val = analogRead(A0);

  aout = map(val, 200, 900, 0, 255);
  aout = constrain(aout, 0, 255);
  analogWrite(11, aout);
  Serial.println(aout);
  delay(10);
}
