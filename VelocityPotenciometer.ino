int rate = 0;
int potenciometroPin = A0;    
int transPin = 6;
int rate2 = 0;
int rate3 = 0;


void setup()
{
  pinMode(transPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{

  rate = analogRead(potenciometroPin);   
  
  rate2 = map(rate, 0, 1023, 0, 255);
  analogWrite(transPin, rate2); 
 

  
}

