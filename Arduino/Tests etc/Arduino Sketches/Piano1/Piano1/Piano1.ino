int speaker = 13;

#include "pitches.h"

//NOTES            'c'  ,   'd'  ,  'e'   ,  'f'   ,  'g'   ,    'a' ,   'b'  ,  'C'
int notes[] = { NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5 }; // 1st octave
// Just think of these as frequecies for the notes. You don't need
// to understand these, leave that for the physicists

void setup()
{ 
  // Assigning a pin for each button
  // We will be reading the signal so we set them as inputs
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);

  // Assigning a pin for the buzzer
  // Since we're writing to this pin, it is set as an output
  pinMode(speaker, OUTPUT);
}

void loop()
{ 
    // Here we use a loop to read from each of the pins 2 to 9
    // The loop is just to save us from writing the same few lines 8 times
    for (int thisSensor = 2; thisSensor < 10; thisSensor++) {
      
      int sensorReading = digitalRead(thisSensor);

      // If the button button being read is pushed...
      if (sensorReading == 1) {
        // play the note corresponding to this sensor:
        tone(speaker, notes[thisSensor - 2], 20);
      }
    }
}
