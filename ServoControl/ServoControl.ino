#include <Servo.h>
Servo servo1;
int spin = 6;
void setup() {
  // put your setup code here, to run once:
servo1.attach(spin);
}

void loop() {
  // put your main code here, to run repeatedly:
servo1.write(0);
delay(1000);
servo1.write(30);
delay(1000);
servo1.write(45);
delay(1000);
servo1.write(60);
delay(1000);
servo1.write(90);
delay(1000);
servo1.write(120);
delay(1000);
servo1.write(180);
delay(1000);
}
