
char data;
void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    Serial.print("Enter the no. of times to blink LED: \n");
    data = Serial.read();
    Serial.print(data);
    Serial.print("\n");
    if(data=='1'){
      digitalWrite(5, HIGH);
    }
    else if(data=='0'){
      digitalWrite(5, LOW);
      }
  }
}
