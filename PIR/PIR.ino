//initialisation de la pin 2
int Capteur= 2;

void setup() {
pinMode(Capteur,INPUT); //définir la pin 2 comme une entré
Serial.begin(9600);
}

void loop() {
  if(digitalRead(Capteur)==HIGH){ //le capteur détecte un mouvement
   Serial.println("mouvement detecte");
  }
  else{//sinon le capteur ne détecte aucun mouvement
   Serial.println("pas de mouvement detecte");
  }

delay(200);
}
