int LED1 = 11;
int LED2 = 12;
int speaker = 13;

#include "pitches.h"

//NOTES            'c'  ,   'd'  ,  'e'   ,  'f'   ,  'g'   ,    'a' ,   'b'  ,  'C'
int notes1[] = { NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5 }; // 1st octave
int notes2[] = { NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6 }; // 2nd octave

void setup()
{ 
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);

  pinMode(LED1, OUTPUT); // LED to identify 1st octave
  pinMode(LED2, OUTPUT); // LED to identify 2nd octave
  pinMode(speaker, OUTPUT); // Buzzer
}

void loop()
{ 
    // Read from the potentiometer
    int potReading = analogRead(A0);
    // If the potentiometer has a reading below 512
    if (potReading < 512) {
      digitalWrite(LED1, 1); // Turn on LED1
      digitalWrite(LED2, 0);
    }
    // If the potentiometer has a reading above 512
    else if (potReading >= 512) {
      digitalWrite(LED2, 1); // Turn on LED2
      digitalWrite(LED1, 0);
    }        
    for (int thisSensor = 2; thisSensor < 10; thisSensor++) {
     
      int sensorReading = digitalRead(thisSensor);
  
      // If the button button being read is pushed...
      if (sensorReading == 1) {
        
        if (potReading < 512) {
          // play the note corresponding to this sensor in the 1st octave
          tone(speaker, notes1[thisSensor - 2], 20);
        }
        else if (potReading >= 512) {
          // play the note corresponding to this sensor in the 2nd octave
          tone(speaker, notes2[thisSensor - 2], 20);
        }
      }
    }
}
