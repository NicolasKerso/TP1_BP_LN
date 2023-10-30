
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//----- Adressage matériel -----
// En cas de non fonctionnement, mettez la ligne 8 en
// commentaire et retirez le commentaire à la ligne 9.
LiquidCrystal_I2C lcd(0x27, 20, 4);
//LiquidCrystal_I2C lcd(0x3F,20,4);
void setup()
{
lcd.init(); // initialisation de l'afficheur
}
void loop()
{
lcd.backlight();
// Envoi du message
lcd.setCursor(0, 0);
lcd.print(" Go Tronic");
lcd.setCursor(0,1);
lcd.print(" I2C Serial LCD");
}
