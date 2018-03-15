void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()!= 0){
    }
    int bl;
    Serial.print("Enter the no. of times to blink LED: \n");
    bl = Serial.parseInt();
   

    if(bl>0){
      
    for(int i=0; i<bl; i++){
      digitalWrite(5, HIGH);
      delay(500);
      digitalWrite(5, LOW);
      delay(500);
      }   
}
}
