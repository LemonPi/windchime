#include <Servo.h>
#define SERVO_PIN 3

Servo wind;
byte angle = 0;
unsigned int cycle_time = 100;


void setup() {
  wind.attach(SERVO_PIN);
}

void loop() {
  wind.write(angle++);
  // nothing for now, call wifi detector afterwards
  
  delay(cycle_time);
}
