int ledArray[] = {6, 7, 8, 9, 10, 11, 12, 13};
int i = 0;
int delaytime = 200;

void setup(){
  for (i=0;i<8;i++) {
    pinMode(ledArray[i], OUTPUT);
  }
}

void loop() {
  for (i=0;i<8;i++) {
   digitalWrite(ledArray[i], HIGH);
   delay(delaytime);
   digitalWrite(ledArray[i], LOW);
   delay(delaytime);
  }
  for (i=7;i>=0;i--) {
   digitalWrite(ledArray[i], HIGH);
   delay(delaytime);
   digitalWrite(ledArray[i], LOW);
   delay(delaytime);
  }
}
