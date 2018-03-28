#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int tPin = A0;
int val;
float temp, volts;
void setup() {
  // put your setup code here, to run once:
 pinMode(tPin, INPUT);
 lcd.begin(16,2);
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("Temperature ");
}

void loop() {
  // put your main code here, to run repeatedly:
val = analogRead(tPin);
volts = (val/1024.0)*5.0;
temp = volts*100.0;
lcd.setCursor(1,1);
lcd.print("T = ");
lcd.print(temp);
lcd.print(" deg C");
delay(50);
}
