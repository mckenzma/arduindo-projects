// color swirl! connect an RGB LED to the PWM pins as indicated
// in the #defines
// public domain, enjoy!
 
#define REDPIN 5
#define GREENPIN 6
#define BLUEPIN 3
 
#define FADESPEED 5     // make this higher to slow down
 
void setup() {
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}
 
 
void loop() {  
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(100);           
  digitalWrite(3, LOW); 
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW); 
  digitalWrite(6, HIGH);
  delay(100);
//  digitalWrite(3, LOW);
//  digitalWrite(5, LOW); 
//  digitalWrite(6, LOW);
//  delay(1000);
}
