

/*
 * Randomiser
*/

int number;                     // sets the variable for the random number generator
int del;                        // sets the variable to determine the delay length
int randNo;                     // holds the value of the random number to send that pin HIGH )switch on the LED) 

void setup()
{
  randomSeed(analogRead(0));                 // this is a random number generator function 
  for (number = 1 ; number < 7 ; number++)   // for loop to choose the random number
  {
    pinMode(number, OUTPUT);           // makes the chosen pin an output
  }
}
void randomLED(int del)               // this function lights the appropriate LED for the appropriate amount of time
{
  randNo = random(1, 7);              // get a random number from 1 to 6
  digitalWrite(randNo, HIGH);         // switch on the matching LED on digital pin 1-6
  if (del > 0)
  {
     delay(del);                      // hold the LED on for the delay received
  }

     else if (del == 0)
  {
    do                                // the delay entered was zero, hold the LED on forever
    {}

     while (1); 
  }
  digitalWrite(randNo, LOW);         // turn off the LED
}
void loop()                          // this function generates the delay length
{
  int count;
  for ( count = 0 ; count < 100 ; count++ )  // cycle the LEDs around for effect 100 times
  {
    randomLED(50);                       // this is the delay that is received by the randomLED function
  }

   for ( count = 1 ; count <= 10 ; count++ )   // this slows down the rate of change for the remaining flashes
  {
    randomLED(count * 100);             // this is the delay that is received by the randomLED function
  }
  randomLED(0);                         // stop at the final random number and LED, sends back a delay of 0
}
