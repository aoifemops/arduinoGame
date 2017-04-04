/*
 Dimmer_LED

 This example shows how to fade an LED on pin 11
 using the analogWrite() function.

 A potentiometer is used as a dimmer switch for 
 the LED

 Note that the analogWrite() function only works on
 the pins labeled with a "~" sign, like ~3, ~5, ~6, 
 ~9, ~10 and ~11.
 */

int led = 11;           
int sensorValue;
int brightness;

void setup() {
  Serial.begin(9600);
  // declare pin 11 to be an output:
  pinMode(led, OUTPUT);
}

void loop() {
  // Take an analog reading from the potentiometer on pin A0
  sensorValue = analogRead(A0);

  // Convert the analog reading to a number between 0 and 255
  brightness = round((sensorValue*255.0)/1023.0); 
  // round() is used to make sure brightness is rounded to an even number

  // Write this brightness level to the LED
  analogWrite(led, brightness);
}
