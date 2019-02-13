// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int rled = 13;
int yled = 12;
int bled = 11;


// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(rled, OUTPUT);
  pinMode(yled, OUTPUT);
  pinMode(bled, OUTPUT);
}


// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(rled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(rled, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  digitalWrite(yled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(yled, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  digitalWrite(bled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(bled, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  digitalWrite(rled, HIGH);   // turn the LED on (HIGH is the voltage level)                // wait for a second
  digitalWrite(yled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(rled, LOW);   // turn the LED on (HIGH is the voltage level)                // wait for a second
  digitalWrite(yled, LOW);
  delay(1000);
  digitalWrite(bled, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(yled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(bled, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(yled, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(bled, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(rled, HIGH);   // turn the LED on (HIGH is the voltage level)   
  delay(1000);
  digitalWrite(bled, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(rled, LOW);   // turn the LED on (HIGH is the voltage level)   
  delay(1000); 
  digitalWrite(rled, HIGH);   // turn the LED on (HIGH is the voltage level)          
  digitalWrite(bled, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(yled, HIGH);
  delay(1000); 
  digitalWrite(rled, LOW);   // turn the LED on (HIGH is the voltage level)          
  digitalWrite(bled, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(yled, LOW);
  delay(1000);
}
