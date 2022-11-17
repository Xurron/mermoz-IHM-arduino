#include "Servo.h"

Servo FS90;
Servo FS90R;

byte FS90_pin = 9;
byte FS90R_pin = 10;
byte incoming;

void setup() {
  FS90.attach(FS90_pin, 500, 2500);
  FS90R.attach(FS90R_pin, 700, 2300);
  Serial.begin(9600);
}

void loop() {
  while(Serial.available() > 0) {
    incoming = Serial.read();
    Serial.print("Code ascii envoyé :");
    Serial.print(incoming);
    Serial.println();
    if(incoming == 118) {
      FS90.write(0);
      FS90R.write(180);
      Serial.print("FS90 : Angle mini");
      Serial.println();
      Serial.print("FS90R : Vitesse maxi horaire");
      Serial.println();
      Serial.println();
      //delay(1000 * 2);
    }
    else if(incoming == 98) {
      FS90.write(90);
      FS90R.write(90);
      Serial.print("FS90 : Angle moyen");
      Serial.println();
      Serial.print("FS90R : Arrêt");
      Serial.println();
      Serial.println();
      //delay(1000 * 2);
    }
    else if(incoming == 110) {
      FS90.write(180);
      FS90R.write(0);
      Serial.print("FS90 : Angle maxi");
      Serial.println();
      Serial.print("FS90R : Vitesse maxi anti-horaire");
      Serial.println();
      Serial.println();
      //delay(1000 * 2);
    }else {
      Serial.println("Erreur de code");
    }
  }
}