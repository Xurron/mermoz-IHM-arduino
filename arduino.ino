byte x = 40;
byte servoPin = 9;

void setup() {
  pinMode(servoPin, OUTPUT);
}

void loop() {
  for(byte n = 0; n < x; n++) {
    digitalWrite(servoPin, HIGH);
    delay(1);
    digitalWrite(servoPin, LOW);
    delay(19);
  }

  delay(2000);

  for(byte n = 0; n < x; n++) {
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(1500);
    digitalWrite(servoPin, LOW);
    delayMicroseconds(18500);
  }

  delay(2000);

  for(byte n = 0; n < x; n++) {
    digitalWrite(servoPin, HIGH);
    delay(2);
    digitalWrite(servoPin, LOW);
    delay(18);
  }

  delay(2000);
}