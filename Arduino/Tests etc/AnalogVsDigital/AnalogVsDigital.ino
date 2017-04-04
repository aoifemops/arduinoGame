void setup() {
  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
}

void loop() {
  
  int analogValue = analogRead(A0);
  int digitalValue = digitalRead(4);
  double voltage = 5*(analogValue/1023.0);
  
  Serial.print("Analog Value: ");
  Serial.print(analogValue);
  Serial.print("  Voltage: ");
  Serial.print(voltage);
  Serial.print(" V   Digital Value: ");
  Serial.println(digitalValue);
  
  delay(1); 
         
}
