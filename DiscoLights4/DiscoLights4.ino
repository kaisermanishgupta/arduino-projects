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
  delay(50);
  analogWrite(13, 70);   //set value to somewhat lower than original brightness

  digitalWrite(12, HIGH);
  delay(50);
  analogWrite(12, 70);

  digitalWrite(14, HIGH);
  delay(50);
  analogWrite(14, 70);

  digitalWrite(4, HIGH);
  delay(50);
  analogWrite(4, 70);

  digitalWrite(16, HIGH);
  delay(150);
  //Here Time delay is doubled so as to reverse the effect of the above code that is to make back and forth lighting.
  analogWrite(16, 70);  
}
