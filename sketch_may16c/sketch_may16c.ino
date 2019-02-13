#include <LiquidCrystal.h>

int trigPin = 9;
int echoPin = 10;

LiquidCrystal lcd(2,3,4,5,6,7);
void setup(){
  lcd.begin(16,2);
  lcd.print("distance");
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 
void loop(){
  float duration;
  float distance;
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
  distance = ((340 * duration) / 10000) / 2;
  lcd.setCursor(0, 1);
  lcd.print(distance);
  delay(500);
  
}

