#define B2 123
#define C3 131
#define D3 147
#define E3 165
#define F3 175
#define G3 196
#define A3 220
#define B3 247
#define C4 262

#define BUZZER 2

#define BPM 153

int melody[] = {
  D3, F3, G3, E3, D3, C3, D3, B2
};
int noteDurations[] = {
  8/3, 8/3, 8/3, 8/7, 8/3, 8/3, 8/3, 8/6,
};

void setup(){

}

void loop() {
  for (int i = 0; i < 8; i++) {
    int noteDuration = 1569 / noteDurations[i];
    tone(BUZZER, melody[i], noteDuration);
    
    delay(noteDuration);
    noTone(BUZZER);
    
  }
  delay(196);
}
