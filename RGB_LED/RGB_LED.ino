int redPin = 11;
int greenPin = 10;
int bluePin = 9;
//int brightness = 0;
//int fadeAmount = 5;
//int ledBlue = 9;
//int ledGreen = 10;
//int ledRed = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
//  pinMode(ledBlue, OUTPUT);
//  pinMode(ledGreen, OUTPUT);
//  pinMode(ledRed, OUTPUT);
}

void loop() {
  // set the brightness of pin 9:
//  analogWrite(ledBlue, brightness);
  // change the brightness for next time through the loop:
//  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
//  if (brightness == 0 || brightness == 255) {
//    fadeAmount = -fadeAmount ;
//  }
  // wait for 30 milliseconds to see the dimming effect
//  delay(30);
  
//  analogWrite(ledGreen, brightness);
//  brightness = brightness + fadeAmount;
//  if (brightness == 0 || brightness == 255) {
//    fadeAmount = -fadeAmount ;
//  }
//  delay(30);
  
//  analogWrite(ledRed, brightness);
//  brightness = brightness + fadeAmount;
//  if (brightness == 0 || brightness == 255) {
//    fadeAmount = -fadeAmount ;
//  }
//  delay(30);
  
  // put your main code here, to run repeatedly:
  setColor(255, 0, 0);  // red
  delay(1000);
  setColor(0, 255, 0);  // green
  delay(1000);
  setColor(0, 0, 255);  // blue
  delay(1000);
  setColor(255, 255, 0);  // yellow
  delay(1000);  
  setColor(80, 0, 80);  // purple
  delay(1000);
  setColor(0, 255, 255);  // aqua
  delay(1000);
}

void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
