/* Knight Rider 1 */

int pin8 = 8;
int pin9 = 9;
int pin10 = 10;
int pin11 = 11;
int timer = 100;

void setup(){
  pinMode(pin8, OUTPUT);
  pinMode(pin9, OUTPUT);
  pinMode(pin10, OUTPUT);
  pinMode(pin11, OUTPUT);
}

void loop() {
   digitalWrite(pin8, HIGH);
   delay(timer);
   digitalWrite(pin8, LOW);
   delay(timer);

   digitalWrite(pin9, HIGH);
   delay(timer);
   digitalWrite(pin9, LOW);
   delay(timer);

   digitalWrite(pin10, HIGH);
   delay(timer);
   digitalWrite(pin10, LOW);
   delay(timer);

   digitalWrite(pin11, HIGH);
   delay(timer);
   digitalWrite(pin11, LOW);
   delay(timer);

   digitalWrite(pin10, HIGH);
   delay(timer);
   digitalWrite(pin10, LOW);
   delay(timer);

   digitalWrite(pin9, HIGH);
   delay(timer);
   digitalWrite(pin9, LOW);
   delay(timer);
}
