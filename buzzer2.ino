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
int m[] = {
  2, 4, 5, 3, 2, 1, 2, 7
};
int noteDurations[] = {
  8/3, 8/3, 8/3, 8/7, 8/3, 8/3, 8/3, 8/6,
};
void setup(){
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  for (int i = 0; i < 8; i++) {
    int noteDuration = 1569 / noteDurations[i];
    tone(BUZZER, melody[i], noteDuration);
    digitalWrite(13-m[i],HIGH);
    delay(noteDuration/2);
    digitalWrite(13-m[i],LOW);
    delay(noteDuration/2);
    noTone(BUZZER);
    
  }
  delay(196);
}
