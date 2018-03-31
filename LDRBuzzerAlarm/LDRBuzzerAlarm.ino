int ldrPin = A0;
int ledPin = 10;

void setup() {
  // put your setup code here, to run once:
pinMode(ldrPin, INPUT);
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int st;
st = analogRead(ldrPin);
if(st>=500){
  digitalWrite(ledPin, LOW);
  }
else{
  digitalWrite(ledPin, HIGH);
  }
}
