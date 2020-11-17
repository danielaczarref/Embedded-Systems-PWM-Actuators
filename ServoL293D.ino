
static int en1 = 3;
static int in2 = 4;
static int in1 = 2;

void setup()
{
  
  pinMode(en1, OUTPUT);
  pinMode(in1, OUTPUT);

  pinMode(in2, OUTPUT);
}

void girarSentidoHorario(){
  digitalWrite(en1, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

}
void girarSentidoAntiHorario(){
  digitalWrite(en1, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

}

void parar(){
  digitalWrite(en1, LOW);
}



void loop()
{
  girarSentidoHorario();
  
  delay(2 * 1000);
  
  girarSentidoAntiHorario();
  
  delay(2 * 1000);

  parar();
  
  delay(2*1000);
  
}

