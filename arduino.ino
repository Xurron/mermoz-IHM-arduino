#include "Servo.h"

Servo FS90;
Servo FS90R;

byte FS90_pin = 9;
byte FS90R_pin = 10;

void setup() {
  FS90.attach(FS90_pin, 544, 2400);
  FS90.attach(FS90_pin, 900, 2100);
  Serial.begin(9600);
}

void loop() {
  FS90.write(0);
  FS90R.write(180);
  Serial.print("FS90 : Angle mini");
  Serial.println();
  Serial.print("FS90R : Vitesse maxi horaire");
  Serial.println();
  Serial.println();
  delay(1000 * 2);

  FS90.write(90);
  FS90R.write(90);
  Serial.print("FS90 : Angle moyen");
  Serial.println();
  Serial.print("FS90R : Arrêt");
  Serial.println();
  Serial.println();
  delay(1000 * 2);

  FS90.write(180);
  FS90R.write(0);
  Serial.print("FS90 : Angle maxi");
  Serial.println();
  Serial.print("FS90R : Vitesse maxi anti-horaire");
  Serial.println();
  Serial.println();
  delay(1000 * 2);
}