/*
 Fade

 This uses a for loop: for (fade = 0 ; fade <= 255; fade ++)
 The first part: fade = 0 tells the program what number to start the variable counting at
 The second part: fade <= 255 tells the program what number to finish counting at
 The third part: fade ++ tells the program what size steps to take in getting from the start to the finish

 */

int LED = 9;                                              // LED connected to pin 9
int fade = 0;                                             // set up "fade" as a variable that we can change with code
                                                          // this is similar to the timer in the Knightrider sketch
void setup() 
{
  pinMode(LED, OUTPUT);                                   // set the LED as an output
}
void loop() 
{
  for (fade = 0 ; fade <= 255; fade ++)                   // this for loop repeats 256 times (0-255), the number in the 
                                                          // fade variable increases by 1 each time (++ means add 1)
  {
    analogWrite(LED, fade);                               // this writes the value in fade to the LED, the higher the number, 
                                                          // the brighter the LED
    delay(30);                                            // wait 30 milliseconds
  }

  for (fade = 255 ; fade >= 0; fade --)                   // this for loop repeats 256 times (0-255), the number in the 
                                                          // fade variable decreases by 1 each time (-- means subtract 1)
  {
    analogWrite(LED, fade);
    delay(30);
  }
}
