#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int echoPin = 10; 
const int trigPin = 9;
int duration;
float dist;
void setup() {
  // put your setup code here, to run once:
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Distance: ");
  lcd.setCursor(4,1);
  lcd.print("cm");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);                                   //turning of the sensor by default so it sends no sound wave on starting by default for 2us
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);                 //sending a sound wave for 10us from the sensor and then stopping it after 10us
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  duration = pulseIn(echoPin, HIGH);               //taking the input of reflected sound and converting it to time duration using pukse in function
  dist = (float)duration*0.017;    //converting duration into distance by using speed of sound as 340m/s and converting it to cm/us as 0.034cm/us

  lcd.setCursor(0,1);
  lcd.print(dist);
  delay(1000);              //cleared lcd due to absurd value changes of sensor so that inaccurate data is avoided and delay for proper lcd function
  lcd.clear();

  lcd.begin(16,2);          //after clearing, recopying the code of setup for lcd printing
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Distance: ");
  lcd.setCursor(4,1);
  lcd.print(" cm");
}
