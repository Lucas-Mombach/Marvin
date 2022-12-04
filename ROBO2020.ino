//#include <Wire.h>
//#include <LiquidCrystal_I2C.h>
//LiquidCrystal_I2C lcd(0x27,20,4); // set the LCD address to 0x27 for a 16 chars and 2 line display
#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);

void setup()
{
// lcd.init(); // initialize the lcd
// lcd.init();
// Print a message to the LCD.
// lcd.backlight();
lcd.begin(16, 2);
delay(400);//200
}
void loop()
{
lcd.setCursor(4,0);// 5
lcd.print("|O . O|");
lcd.setCursor(6,1);// 7
lcd.print(" O ");
delay(2000);//1000

lcd.setCursor(4,0);// 5  
lcd.print("|- . -|");
lcd.setCursor(6,1);// 7
lcd.print(" O ");
delay(150);

lcd.setCursor(4,0);// 5
lcd.setCursor(6,1);// 7
lcd.print("---");
delay(150);

lcd.setCursor(4,0);// 5
lcd.print("|O . O|");// - -
lcd.setCursor(6,1);// 7
lcd.print("( )");
delay(450);

lcd.setCursor(4,0);// 5
lcd.print("|O . O|");
lcd.setCursor(6,1);// 7
lcd.print("---");
delay(4000);
}
