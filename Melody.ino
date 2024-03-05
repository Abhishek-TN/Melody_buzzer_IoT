#define NOTE_A4 440
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_D5 587
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_G5 784
int led = 6;
int melody[] = {
  NOTE_A4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, NOTE_B4, NOTE_A4, 
  NOTE_G5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_E5, NOTE_F5, NOTE_G5, 
  NOTE_A4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, NOTE_B4, NOTE_A4, 
  NOTE_G5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_E5, NOTE_F5, NOTE_G5, 
};

int noteDuration = 500; // in milliseconds

void setup() {
  for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(melody[0]); thisNote++) {
    int noteDuration = 1000 / 4; // 1/4 note duration is 1000 milliseconds divided by beats per minute
    tone(6, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(6); // stop the tone playing
  }
}

void loop() {for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(melody[0]); thisNote++) {
    int noteDuration = 1000 / 4; // 1/4 note duration is 1000 milliseconds divided by beats per minute
    tone(6, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(6); // stop the tone playing
}
  // no need to do anything here
}
