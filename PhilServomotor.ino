#include <Servo.h>
Servo myservo;
int x = analogRead(5);


void setup() {
  myservo.attach(3);
}

void loop() {
  x = analogRead(5);
  x / 180;
  myservo.write(x);
  delay(1);

}
