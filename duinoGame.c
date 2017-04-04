/* Whack a Mole  */

int redLed = 13;
int greenLed = 12;                 // declare each io here
int blueLed = 11;
int yellowLed = 10;

int buzzer = 9;

int redButton = 8;
int greenButton = 7;
int blueButton = 6;
int yellowButton = 5;

int rstButton = 4;

// 3,2,1 and 0 are all available

// Variables for debouncing

int buttonState;             // the current reading from the input pin
int lastButtonState = LOW;   // the previous reading from the input pin

unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers

// Global variables
int randColour = 2;

void setup(){                 // this sets all the pins as outputs/inputs
  pinMode(redLed, OUTPUT);      
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  
  pinMode(redButton, INPUT);
  pinMode(greenButton, INPUT);
  pinMode(blueButton,INPUT);
  pinMode(yellowButton, INPUT);
  
  pinMode(rstButton,INPUT);
}

void waitButton(int button){
	
	int buttonPress = 0;
	while (buttonPress == 0){
		int reading = digitalRead(button);
	 
		if (reading != lastButtonState) {
			lastDebounceTime = millis();
		}

		if ((millis() - lastDebounceTime) > debounceDelay) {
		
			if (reading != buttonState) {
				buttonState = reading;

				if (buttonState == HIGH) {
					buttonPress = 1;
				}
			}
		}

	  lastButtonState = reading;
	}
	return;
	
		
}

int selectLed(){
	randColour = random(0,3);
	int colour;
	switch(randColour){
		case '0' :
			colour = redLed;
			break;
		case '1' :
			colour = greenLed;
			break;
		case '2' :
			colour = blueLed;
			break;
		default:
			colour = yellowLed;
			break;
	}
	return colour;
}

void flashLed(int led){
	
		digitalWrite(led, HIGH);
		
		for(int i = 0; i < 75; i++){
			//this is where the real stuff happens
			delay(2);
		}
		
		digitalWrite(led, LOW);
		return;
	}

int runGame(){
	int led, score;
	score = 0;
	
	for(int i = 0; i < 16; i++){
		led = selectLed();
		flashLed(led);
	}
		
	//checkButton(colour)
	//incrementScore
	score += 1;
	return score;
}

void endSeq(){
	for(int i = 0; i < 3; i++){
		digitalWrite(redLed, HIGH);
		digitalWrite(greenLed, HIGH);
		digitalWrite(blueLed, HIGH);
		digitalWrite(yellowLed, HIGH);
		
		delay(500);
		
		digitalWrite(redLed, LOW);
		digitalWrite(greenLed, LOW);
		digitalWrite(blueLed, LOW);
		digitalWrite(yellowLed, LOW);
		
		delay(500);
	}
	//flash all leds together 3 times
	//play a sound on the buzzer
	//tone()
	return;
}

void displayScore(){
	//take score from incrementScore
	//convert it to binary
	//save each bit
	//drive each led with each bit
	return;
	
}

void loop() {
   
   waitButton(rstButton);
   runGame();
   endSeq();
   displayScore();

}



