/*
  Button_and_LED
  This program turns on an LED on whnever the user pushes a button
*/

// This time we will define the pins as words so we don't have to remember the numbers
int button = 12;     // we initialize pin 2 as the button
int led = 13;        // and pin 3 as the LED

// the setup function runs once when you press reset or power the board
void setup() {  
  pinMode(button, INPUT);   // the button is an input (we are 'reading' the signal from it)
  pinMode(led, OUTPUT);   // and the LED is an output (we are 'writing' a signal to it)
}

// the loop function runs over and over again forever
void loop() {
  int buttonState = digitalRead(button);    // this reads the state (or value) of the button
            // if it’s pressed it will be 1 or HIGH
            // if not it will be 0 or LOW
  
  if (buttonState == 0) {       // now the code checks if the button is not pressed
    digitalWrite(led, 1);       // if so the LED is on
  }
  else {                        // otherwise
    digitalWrite(led, 0);       // the LED turns off
  }
  delay(1);   // the program then waits 1 ms before checking the button again     
}

