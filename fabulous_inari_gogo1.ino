#include <Servo.h>

int position = 0;

int i = 0;

int j = 0;

Servo servo_9;

Servo servo_5;

void setup()
{
  servo_9.attach(9);

  servo_5.attach(5);

}

void loop()
{
  position = 0;
  for (position = 1; position <= 179; position += 1) {
    servo_9.write(position);
    servo_5.write(position);
    delay(20); // Wait for 20 millisecond(s)
  }
  for (position = 179; position >= 1; position -= 1) {
    servo_9.write(position);
    servo_5.write(position);
  }
}