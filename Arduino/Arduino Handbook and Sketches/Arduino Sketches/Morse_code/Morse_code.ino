/*

  Morse Code 
 
 */
 
 
void GetChar(char letter);            // declares a subroutine or function which we want to call on later
                                      // the function is called "GetChar", the void means that it sends nothing back to the main program
                                      // the char letter means that it needs to get whatever is contain in the letter variable sent to it

char stringToMorseCode[] = " TY Morse Code Program ";   // choose what word or phrase you want to send as Morse Code                 

int LED1 = 6;         // LED on output 6
int LED2 = 7;         // LED on output 7
int LED3 = 8;         // LED on pin 8 , comment this out for the version with the buzzer
// int audio8 = 8;    // buzzer on pin 8, uncomment this for the version with the buzzer
// int note = 1200;   // pitch of note, uncomment this for the version with the buzzer       


int dotLen = 200;             // length of the morse code 'dot'
int dashLen = dotLen * 3;     // length of the morse code 'dash' - 3 times as long as a dot
int elemPause = dotLen;       // length of the pause between dots and dashes
int Spaces = dotLen * 3;      // length of the spaces between characters
int wordPause = dotLen * 7;   // length of the pause between words
int temp;
char letter;


// the setup routine runs once when you press reset:
void setup() {                
  pinMode(LED1, OUTPUT);      // set up all the LED pins as outputs
  pinMode(LED2, OUTPUT); 
  pinMode(LED3, OUTPUT); 
//  pinMode(audio8, OUTPUT);
}

void loop()
{ 
   for (temp = 0; temp < sizeof(stringToMorseCode) - 1; temp++)  // this goes through all the characters in your word / phrase
                                                                       // the for loop is similar to the one in the Fade project
                                                                       // but this time it counts through each character in the 
                                                                       // phrase rather than counting through numbers
  {
   letter = stringToMorseCode[temp];                  // Get the character in the current position
   letter = toLowerCase(letter);                      // this is a special instruction that changes all the characters to lower case
                                                      // so if you put in capital letters the code can still recognise them
   GetChar(letter);                                   // this sends the program to a subroutine and sends the current character to 
                                                      // it, to be translated into Morse Code
  }
   LightsOff(8000);                                   //  turn the LEDs off for 8 seconds at the end of each loop   
}


// DOT
void MorseDot()                                       // tells how to do a dot, turn LEDs on and delay for the dot length                                   
{
  digitalWrite(LED1, HIGH);    
  digitalWrite(LED2, HIGH); 
  digitalWrite(LED3, HIGH);
//  tone(audio8, note, dotLen); 
  delay(dotLen);              // hold in this position
}

// DASH                                               // tells how to do a dash, turn LEDs on and delay for the dash length 
void MorseDash()
{
  digitalWrite(LED1, HIGH);    
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
//  tone(audio8, note, dashLen);  // start playing a tone
  delay(dashLen);               // hold in this position
}

// Turn Off
void LightsOff(int delayTime)                         // switches all the LEDs off
{
  digitalWrite(LED1, LOW);      
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);  
//  noTone(audio8);             // stop playing a tone
  delay(delayTime);             // hold in this position
}


void GetChar(char letter)                             // this part identifies what the letter is and allocates the appropriate
                                                      // Morse Code pattern
{
  switch (letter) {
    case 'a':                                         // 'a' is a dot followed by a dash
      MorseDot();
      LightsOff(elemPause);                             // pause between each element of the letter
      MorseDash();
      LightsOff(elemPause);
      break;
    case 'b':                                         // 'b' is a dash and 3 dots
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      break;
    case 'c':
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      break;
    case 'd':
      MorseDash();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      break;
    case 'e':
      MorseDot();
      LightsOff(elemPause);
      break;
    case 'f':
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      break;
    case 'g':
      MorseDash();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      break;
    case 'h':
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      break;
    case 'i':
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      break;
    case 'j':
      MorseDot();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      break;
    case 'k':
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      break;
    case 'l':
      MorseDot();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      break;
    case 'm':
      MorseDash();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      break;
    case 'n':
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      break;
    case 'o':
      MorseDash();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      break;
    case 'p':
      MorseDot();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      break;
    case 'q':
      MorseDash();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      break;
    case 'r':
      MorseDot();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      break;
    case 's':
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
    break;
    case 't':
      MorseDash();
      LightsOff(elemPause);
      break;
    case 'u':
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      break;
    case 'v':
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      break;
    case 'w':
      MorseDot();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
    break;
    case 'x':
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
    break;
    case 'y':
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      break;
    case 'z':
      MorseDash();
      LightsOff(elemPause);
      MorseDash();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      MorseDot();
      LightsOff(elemPause);
      break;
    default:                                      
      LightsOff(Spaces);                              // If a matching character was not found it will default to a blank space      
  }
}
