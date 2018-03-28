#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);      // put your LCD parameters here
  lcd.clear();
  lcd.print("Jai Shree Ram");
  lcd.setCursor(2,1);
  lcd.print("Hello Manish!");
}

void loop() {
  
}
