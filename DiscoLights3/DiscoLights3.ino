void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(16, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(100);

  digitalWrite(12, HIGH);
  delay(100);

  digitalWrite(14, HIGH);
  delay(100);

  digitalWrite(4, HIGH);
  delay(100);

  digitalWrite(16, HIGH);
  delay(1000);

  analogWrite(16, 150);
  delay(100);
  
  analogWrite(4, 150);
  delay(100);
  
  analogWrite(14, 150);
  delay(100);

  analogWrite(12, 150);
  delay(100);
  
  analogWrite(13, 150);
  delay(1000);

  analogWrite(12, 25);
  delay(100);

  analogWrite(14, 25);
  delay(100);
  
  analogWrite(4, 25);
  delay(100);

  analogWrite(16, 25);
  delay(1000);

  digitalWrite(16, LOW);
  delay(100);

  digitalWrite(4, LOW);
  delay(100);

  digitalWrite(14, LOW);
  delay(100);

  digitalWrite(12, LOW);
  delay(100);

  digitalWrite(13, LOW);
  delay(100);
}
