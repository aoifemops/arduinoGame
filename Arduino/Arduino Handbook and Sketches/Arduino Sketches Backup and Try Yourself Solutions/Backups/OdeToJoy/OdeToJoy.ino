int speaker = 13;

#include "pitches.h"

//int notes[] = { NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5 }; 

void setup()
{ 
  pinMode(speaker, OUTPUT); // Buzzer
}

void loop()
{ 
  playnote(NOTE_E4, 1);
  playnote(NOTE_E4, 1);
  playnote(NOTE_F4, 1);
  playnote(NOTE_G4, 1);
  playnote(NOTE_G4, 1);
  playnote(NOTE_F4, 1);
  playnote(NOTE_E4, 1);
  playnote(NOTE_D4, 1);
  playnote(NOTE_C4, 1);
  playnote(NOTE_C4, 1);
  playnote(NOTE_D4, 1);
  playnote(NOTE_E4, 1);
  playnote(NOTE_E4, 1.5);
  playnote(NOTE_D4, 0.5);
  playnote(NOTE_E4, 2);
}

void playnote(int note, double t) 
{
  int t1 = round(t*250);
  tone(speaker, note);
  delay(t1-10);
  tone(speaker, 0);
  delay(10);
}

