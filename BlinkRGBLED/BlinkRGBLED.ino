void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(4) == HIGH){
  //Red
digitalWrite(8, HIGH);
delay(500);
digitalWrite(8, LOW);
delay(500);

//Green
digitalWrite(9, HIGH);
delay(500);
digitalWrite(9, LOW);
delay(500);  

//Blue
digitalWrite(10, HIGH);
delay(500);
digitalWrite(10, LOW);
delay(500);
}
}
