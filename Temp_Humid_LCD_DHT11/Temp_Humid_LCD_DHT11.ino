#include <dht.h>
#include <LiquidCrystal.h>
int dpin = A0;
dht DHT;
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
 lcd.setCursor(0,0); 
 lcd.print("Temp: ");
 lcd.setCursor(0,1);
 lcd.print("Humidity: ");
}

void loop() {
  // put your main code here, to run repeatedly:
int chk = DHT.read11(dpin);
  lcd.setCursor(6,0);
  
  lcd.print(DHT.temperature);
  lcd.print((char)223);
  lcd.print("C");
  delay(1000);
  lcd.setCursor(10,1);
  lcd.print(DHT.humidity);
  lcd.print("%");
  delay(1000);
}
