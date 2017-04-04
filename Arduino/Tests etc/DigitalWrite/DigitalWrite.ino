int button = 2;
int led = 3;


void setup() {
  
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
  
}


void loop() {

  int buttonState = digitalRead(button);
  
  if (buttonState == 1) {
    digitalWrite(led, 1);
  }
  else {
    digitalWrite(led, 0);
  }
  delay(1);  
       
}



