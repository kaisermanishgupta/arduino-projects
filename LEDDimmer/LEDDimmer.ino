int potPin = A0;
int ledPin = 5;
int rval, wval;
void setup() {
  // put your setup code here, to run once:
pinMode(potPin, INPUT);
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
rval = analogRead(potPin);
wval = (255./1023.)*rval;
analogWrite(ledPin, wval);
}
