;::ù!int CNY = A0;
int color;
int colorTab[10];

void setup() {

  //TO DO : INITIALISER L ENTREE !!!!!!!!!!!
  pinMode(CNY, INPUT);
  Serial .begin(9600);
}

void loop() {
  //prise des mesure
  for(int i=0;i<10;i++){
    colorTab[i] = analogRead(CNY);
    delay(50);
  }

  //moyenne
  color = 0;
  for(int i=0;i<10;i++){
    color= color + colorTab[i];
  }
  color = color/10;

  //affichage
  Serial.print(color);
  if (color> 400){
    Serial.println(" blanc");
  }
  else {
    Serial.println(" noir");
  }
}
