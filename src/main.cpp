#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
    pinMode(PB10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(PB10, HIGH);
    // wait one second
    delay(1000);
    digitalWrite(PB10, LOW);
    delay(1000);
}