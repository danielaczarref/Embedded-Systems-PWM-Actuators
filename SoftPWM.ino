int servoPin = 9;
int angulo;

void setup() {
  pinMode(servoPin, OUTPUT);
}
void pulso(int angulo)           
{
   int tempo  = (angulo*10) + 600;
   int condicaoParada = (20000-tempo)/tempo;
     
   digitalWrite(servoPin, HIGH);  
   delayMicroseconds(tempo);     
   digitalWrite(servoPin, LOW); 
   for(int i=0; i<condicaoParada; i++) delayMicroseconds(tempo);                           
}

void loop() {
  for(int angulo = 10; angulo < 180; angulo+=10){
    for (int i = 0; i < 100; i++) pulso(angulo);
    delay(5);
  }
  delay(50);
}

