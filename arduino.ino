#include "Servo.h"

Servo FS90;
Servo FS90R;

byte FS90_pin = 9;
byte FS90R_pin = 10;

void setup() {
  FS90.attach(FS90_pin, 900, 2100);
  FS90R.attach(FS90R_pin, 700, 2300);
}

void loop() {
  FS90.write(0);
  FS90R.write(180);
  delay(1000 * 2);

  FS90.write(90);
  FS90R.write(90);
  delay(1000 * 2);

  FS90.write(180);
  FS90R.write(0);
  delay(1000 * 2);
}
