
#define ZERO_DETACH   PB12
#define DUTY          PB13

void detach_zero() {
  /* 
    start:      1000 -> 9500
    percent:      0% -> 100%
    state:        ON ->  OFF
  */
  delayMicroseconds(9500);
  digitalWrite(DUTY, HIGH);
  delayMicroseconds(10);
  digitalWrite(DUTY, LOW);
}

void setup() {
  pinMode(DUTY, OUTPUT);
  digitalWrite(DUTY, LOW);
  attachInterrupt(digitalPinToInterrupt(ZERO_DETACH), detach_zero, FALLING);
}

void loop () {}
