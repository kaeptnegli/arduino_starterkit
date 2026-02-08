/*
  Arduino Starter Kit example
  Project 2 - Spaceship Interface

  This sketch is written to accompany Project 2 in the Arduino Starter Kit

  Parts required:
  - one green LED
  - two red LEDs
  - pushbutton
  - 10 kilohm resistor
  - three 220 ohm resistors

  created 13 Sep 2012
  by Scott Fitzgerald

  https://store.arduino.cc/genuino-starter-kit

  This example code is part of the public domain.
*/

// Create a global variable to hold the state of the switch. This variable is
// persistent throughout the program. Whenever you refer to switchState, you’re
// talking about the number it holds
int switchstate = 0;

void setup() {
  // declare the LED pins as outputs
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  // declare the switch pin as an input
  pinMode(2, INPUT);
}

void loop() {
  switchstate = digitalRead(2);

  if (switchstate == LOW) {
    digitalWrite(3, LOW);   // turn the green LED on pin 3 off
    digitalWrite(4, LOW);   // turn the red LED on pin 4 off
    digitalWrite(5, HIGH);  // turn the red LED on pin 5 on

    delay(250);
    digitalWrite(4, HIGH);  // turn the red LED on pin 4 on
    digitalWrite(5, LOW);   // turn the red LED on pin 5 off

    delay(250);
  }
  else {
    digitalWrite(3, HIGH);   // turn the green LED on pin 3 off
    digitalWrite(4, LOW);   // turn the red LED on pin 4 off
    digitalWrite(5, LOW);
  }
}
