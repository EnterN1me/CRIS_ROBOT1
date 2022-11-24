#include <Servo.h>

Servo roueDroite;
Servo roueGauche;
 
int sensTrigo = 180;
int sensHoraire = 0;
int sensArret = 90;

void setup() {
  roueDroite.attach(A0);  
  roueGauche.attach(A1);
}

//pas tres sur du sens
void go(){
  motor(sensHoraire,sensTrigo);
}

void arriere(){
  motor(sensTrigo,sensHoraire);
}

void arret(){
  motor(arret,arret);
}

void motor(int dr, int ga){
  roueDroite.write(dr);
  roueGauche.write(ga);
}

void loop() {
  go();
}
