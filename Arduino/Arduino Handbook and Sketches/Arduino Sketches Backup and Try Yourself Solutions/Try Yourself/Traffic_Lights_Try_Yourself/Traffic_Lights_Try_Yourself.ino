/*   Traffic Lights   */

int greenLED = 8;                 // LEDs and their pin numbers
int yellowLED = 9;
int redLED = 10;
int button = 11;                  // button pin number

void setup()                      
{
 pinMode (greenLED, OUTPUT);      // set up all LED pins as outputs     
 pinMode (yellowLED, OUTPUT);
 pinMode (redLED, OUTPUT);
 pinMode (button, INPUT);         // set up the button as an input
}

void loop()                       // repeat this loop forever
{
  int buttonState = digitalRead(button);  // read the state of the button
  if (buttonState == 1)           // if the button is pressed start the sequence
  {
    digitalWrite(greenLED, HIGH);    // Green on
    delay(4000);                     // wait 4 seconds
    digitalWrite(greenLED, LOW);     // Green off 
     digitalWrite(yellowLED, HIGH);   // Yellow on
     delay(2000);                     // wait 2 seconds
    digitalWrite(yellowLED, LOW);    // Yellow off 
    digitalWrite(redLED, HIGH);      // red on 
    delay(3000);                     // wait 3 seconds
    digitalWrite(yellowLED, HIGH);   // Yellow and red on
    delay(2000);                     // wait 2 seconds
    digitalWrite(redLED, LOW);       // Red off
     digitalWrite(yellowLED, LOW);    // Yellow off
  }
  else                                // otherwise leave the light green
  {
    digitalWrite(greenLED, HIGH);    // Green on
    delay(2000);                     // wait 4 seconds
  }  
  
}

