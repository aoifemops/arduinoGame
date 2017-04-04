/*   Traffic Lights   */

int greenled = 8;                 // LEDs and their pin numbers
int yellowled = 9;
int redled = 10;

void setup()                      // set up all pins as outputs 
{
 pinMode (greenLED, OUTPUT);     
 pinMode (yellowLED, OUTPUT);
 pinMode (redLED, OUTPUT);
}

void loop()                       // repeat this loop forever
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

