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
  delay(50);   //set value to somewhat lower than original brightness

  digitalWrite(12, HIGH);
  delay(50);

  digitalWrite(14, HIGH);
  delay(50);

  digitalWrite(4, HIGH);
  delay(50);

  digitalWrite(16, HIGH);
  delay(350);
  //Here Time delay is doubled so as to reverse the effect of the above code that is to make back and forth lighting.


  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(14, LOW);
  digitalWrite(4, LOW);
  digitalWrite(16, LOW);
  
  delay(500);

//Reversing the above functionality
  digitalWrite(16, HIGH);
  delay(50);   //set value to somewhat lower than original brightness

  digitalWrite(4, HIGH);
  delay(50);

  digitalWrite(14, HIGH);
  delay(50);

  digitalWrite(12, HIGH);
  delay(50);

  digitalWrite(13, HIGH);
  delay(350);

  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(14, LOW);
  digitalWrite(4, LOW);
  digitalWrite(16, LOW);
  
  delay(500);
}
