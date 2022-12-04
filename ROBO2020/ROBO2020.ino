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
//acordando
  olhos_fechados();
 //bocejo
  boca_fechada();
  delay(800);
  boca_semiaberta();
  delay(350);
  boca_aberta();
  delay(500);
  boca_fechada();
  delay(300);
  // piscar os olhos parar acordar
  olhos_abertos();
  delay(150);
  olhos_fechados();
  delay(150);
  olhos_abertos();
  delay(150);
  olhos_fechados();
  delay(150);
  olhos_abertos();
delay(400);//200
}
//funções
void olhos_abertos(){
  lcd.setCursor(4,0);// 5
  lcd.print("|O . O|");
}
void olhos_fechados(){
  lcd.setCursor(4,0);// 5
  lcd.print("|- . -|");
}

void boca_aberta(){
  
  lcd.setCursor(6,1);// 7
  lcd.print(" O ");
  
}
void boca_fechada(){
  lcd.setCursor(4,0);// 5
  lcd.setCursor(6,1);// 7
  lcd.print("---");
}
void boca_semiaberta(){
  lcd.setCursor(6,1);// 7
  lcd.print("( )");
}

void smile(){
  lcd.setCursor(5,1);// 5
  lcd.print("-___-");
  delay(1500);
  lcd.clear();
}
void piscar(){
  delay(150);
  olhos_fechados();
  delay(150);
  olhos_abertos();
}
void piscar_l(){
  lcd.setCursor(4,0);// 5
  lcd.print("|- . O|");
  delay(300);
  olhos_abertos();
}
void piscar_r(){
  lcd.setCursor(4,0);// 5
  lcd.print("|O . -|");
  delay(300);
  olhos_abertos();
}
void lingua(){
  olhos_fechados();
  lcd.setCursor(5,1);// 5
  lcd.print("< U >");
  delay(1500);
  lcd.setCursor(5,1);// 5
  lcd.print(" --- ");
}

void loop()
{
//default mode
olhos_abertos();
boca_fechada();
delay(800);
piscar();
delay(800);
// CHAMAR AS FUNÇÕES
int x;
x = analogRead (0);
//RIGHT
  if (x < 60) {
    piscar_r();
  }
  //UP
  else if (x < 200) {
    //outra expressão
  }
  //DOWN
  else if (x < 400){
    lingua();
  }
  //LEFT
  else if (x < 600){
    piscar_l();
  }
  //SELECT
  else if (x < 800){
    smile();
    olhos_abertos();
    boca_fechada();
  }


delay(1000);
}
