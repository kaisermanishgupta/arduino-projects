
void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(6, HIGH);
  delay(50);
  analogWrite(6, 30);   //set value to somewhat lower than original brightness

  digitalWrite(5, HIGH);
  delay(50);
  analogWrite(5, 30);

  digitalWrite(11, HIGH);
  delay(50);
  analogWrite(11, 30);

  digitalWrite(10, HIGH);
  delay(50);
  analogWrite(10, 30);

  digitalWrite(9, HIGH);
  delay(150);
  //Here Time delay is doubled so as to reverse the effect of the above code that is to make back and forth lighting.
  analogWrite(9, 30);  

    digitalWrite(10, HIGH);
  delay(100);
  analogWrite(10, 30);

  digitalWrite(11, HIGH);
  delay(100);
  analogWrite(11, 30);

  digitalWrite(5, HIGH);
  delay(100);
  analogWrite(5, 30);

  digitalWrite(6, HIGH);
  delay(100);
  analogWrite(6, 30);
}
