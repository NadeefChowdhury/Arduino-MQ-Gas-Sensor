#include <LiquidCrystal.h>
#define gas A0
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(20, 4);
  // Print a message to the LCD.

  lcd.setCursor(0,0);
  lcd.print("");
  lcd.setCursor(4,3);
  pinMode(gas , INPUT);
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
 
  
  if(digitalRead(gas) == HIGH){
    lcd.setCursor(0,1);
    lcd.print("Gas detected");
   }
  if(digitalRead(gas) == LOW){
    lcd.setCursor(0,1);
    lcd.print("No gas detected");
   }

  
  

}

