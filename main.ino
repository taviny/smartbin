#include <Servo.h>
Servo myServo;
int servoPin = 9;
int sensorPin = A1;

void setup() {
  myServo.attach(servoPin);
  pinMode(sensorPin, INPUT);
}

void loop() {
  if (digitalRead(sensorPin) == LOW) { 
    myServo.write(55);
    delay(3000);
  } else {
    myServo.write(0);
  }
  
  delay(100);

}
