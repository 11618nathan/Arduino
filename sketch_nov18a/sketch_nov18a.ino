#include <ArduinoRobot.h>
#include <Wire.h>
#include <SPI.h>



void setup() {
  Robot.begin();

}

void loop() {
  Robot.motors(-200, -200);
  delay(700);
  Robot.motors(0, 0);
  delay(700);
  Robot.motors(200, 200);
  delay(700);
  Robot.motors(200, 0);
  delay(700);
  Robot.motors(0, 200);
  delay(700);

}
