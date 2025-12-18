
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display
  char data;
void setup() {
  lcd.init();
  lcd.clear();         
  lcd.backlight();      // Make sure backlight is on
   Serial.begin(9600);
  // Print a message on both lines of the LCD.
}

 
void loop() {
 
   lcd.setCursor(0,0);   //Set c
  // char data= Serial.read();
   
  lcd.print("aa");
  // delay(2000);
  // lcd.clear();
 }
// }/
