

/*
 * Randomiser with 2 extra LEDs and a button
*/

int number;                     // sets the variable for the random number generator
int del;                        // sets the variable to determine the delay length
int randNo;                     // holds the value of the random number to send that pin HIGH )switch on the LED)
int button = 10;                // button pin number

void setup()
{
  pinMode (button, INPUT);         // set up the button as an input
  randomSeed(analogRead(0));                 // this is a random number generator function 
  for (number = 1 ; number < 9; number++)   // for loop to choose the random number
  {
    pinMode(number, OUTPUT);           // makes the chosen pin an output
  }
}
void randomLED(int del)               // this function lights the appropriate LED for the appropriate amount of time
{
  randNo = random(1, 9);              // get a random number from 1 to 8
  digitalWrite(randNo, HIGH);         // switch on the matching LED on digital pin 1-6
  int buttonState = digitalRead(button);  // read the state of the button
  if (del > 0)
  {
     delay(del);                      // hold the LED on for the delay received
  }

  else if (del == 0)
  {
     delay(5000);                     // the delay entered was zero, LED on for 5 seconds
  }
   digitalWrite(randNo, LOW);         // turn off the LED
}

void loop()                          // this function generates the delay length
{
  int count;
  int buttonState = digitalRead(button);  // read the state of the button
  if (buttonState == 1)                   // if the button is pressed start the sequence
  {
  for ( count = 0 ; count < 100 ; count++ )  // cycle the LEDs around for effect 100 times
  {
    randomLED(50);                       // this is the delay (50ms) that is received by the randomLED function
  }

   for ( count = 1 ; count <= 10 ; count++ )   // this slows down the rate of change for the remaining flashes
  {
    randomLED(count * 100);             // this is the delay that is received by the randomLED function
  }
  randomLED(0);                         // stop at the final random number and LED, sends back a delay of 0
  }
}
