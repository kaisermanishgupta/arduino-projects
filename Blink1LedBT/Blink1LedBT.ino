
void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop() {
  while(Serial.available()!= 0){
    }
    int bl;
    Serial.print("Enter the no. of times to blink LED: \n");
    bl = Serial.parseInt();
      
    for(int i=0; i<bl; i++){
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(12, LOW);
      delay(500);
      }
      
    
 }
