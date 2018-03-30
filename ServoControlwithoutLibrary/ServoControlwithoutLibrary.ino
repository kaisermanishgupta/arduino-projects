int spin = 6;
int rotAng = 1500;
void setup() {
  // put your setup code here, to run once:
pinMode(spin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(spin, HIGH);
delayMicroseconds(rotAng);
digitalWrite(spin, LOW);
delay(20);
}
