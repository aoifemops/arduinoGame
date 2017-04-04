/* Knight Rider  */

int pin8 = 8;                 // declare each LED here
int pin9 = 9;
int pin10 = 10;
int pin11 = 11;

void setup(){                 // this sets all the pins as outputs
  pinMode(pin8, OUTPUT);      
  pinMode(pin9, OUTPUT);
  pinMode(pin10, OUTPUT);
  pinMode(pin11, OUTPUT);
}


void loop() {
   digitalWrite(pin8, HIGH);
   delay(150);
   digitalWrite(pin8, LOW);
   delay(150);

   digitalWrite(pin9, HIGH);
   delay(150);
   digitalWrite(pin9, LOW);
   delay(150);

   digitalWrite(pin10, HIGH);
   delay(150);
   digitalWrite(pin10, LOW);
   delay(150);

   digitalWrite(pin11, HIGH);
   delay(150);
   digitalWrite(pin11, LOW);
   delay(150);

   digitalWrite(pin10, HIGH);
   delay(150);
   digitalWrite(pin10, LOW);
   delay(150);

   digitalWrite(pin9, HIGH);
   delay(150);
   digitalWrite(pin9, LOW);
   delay(150);
}
