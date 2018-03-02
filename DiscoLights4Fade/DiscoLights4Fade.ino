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

  for(int br=0; br<=255; br++){
  analogWrite(16, br);
  analogWrite(4, br);
  analogWrite(14, br);
  analogWrite(12, br);
  analogWrite(13, br);
  delay(20);
  }

delay(1000);
  
for(int dm=255; dm>0; dm--){
  analogWrite(13, dm); 
  analogWrite(12, dm);
  analogWrite(14, dm);
  analogWrite(4, dm);
  analogWrite(16, dm);
  delay(20);
}
delay(2000);

}
