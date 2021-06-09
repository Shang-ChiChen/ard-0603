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
int s[]={
  C3, D3, E3, F3, G3, A3, B3
};
int melody[] = {
  D3, F3, G3, E3, D3, C3, D3, B2
};

void setup(){
  Serial.begin(9600);
  pinMode(12, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
}

void loop() {
  for(int i=6;i<=12;i++){
  	if(digitalRead(i)== 0){
    	tone(BUZZER, s[12-i], 400);
  	}
  }
  delay(400);
  noTone(BUZZER);
}
