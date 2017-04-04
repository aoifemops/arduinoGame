/*
  Potentiometer
  This programme reads an analog input on pin A0, prints the result to the serial monitor.
  
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  // this is so we can read the analog value on the PC monitor
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.print("Analog reading:  ");
  Serial.println(sensorValue); // println goes to a new line after printing
  delay(1); // delay in between reads for stability
}
