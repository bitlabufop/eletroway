#define inicio 3
#define arame 7
#define fim 4
#define ledverm 5
#define ledverd 6
#define buzzer 2
int estado = LOW;


int melody[] = {3000, 3000, 3000, 1700, 1700, 2100};
int noteDuration[] = {100, 100, 100, 200, 100, 400};

void setup( ) {
  pinMode(inicio, INPUT_PULLUP);
  pinMode(arame, INPUT_PULLUP);
  pinMode(fim, INPUT_PULLUP);
  pinMode(ledverm, OUTPUT);
  pinMode(ledverd, OUTPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(ledverm, LOW);
  digitalWrite(ledverd, LOW);

    for (int i = 0; i < 6; i++) {
    tone(buzzer, melody[i], noteDuration[i]);
    delay(noteDuration[i] + 30);
  }
}

void loop( ) {


  if(digitalRead(arame) == LOW && estado == LOW){
    digitalWrite(ledverm, HIGH);
    tone(buzzer, 1109);
    delay(1000);
    noTone(buzzer);
    estado = HIGH;
  }
  
  if(digitalRead(inicio) == LOW){
    estado = LOW;
    digitalWrite(ledverm, LOW);
    digitalWrite(ledverd, HIGH);
    delay(500);
    digitalWrite(ledverd, LOW);
  }
  
  if(digitalRead(fim) == LOW && estado == LOW){
    digitalWrite(ledverd, HIGH);
   // tone(buzzer, 880, 150);
    //delay(300);
    //tone(buzzer, 1109, 150);
    //delay(300);
    //tone(buzzer, 1175, 150);
    tocarMusica();
    delay(500);
    estado = HIGH;
  }
  delay(10);
  
}
void tocarMusica() {
  int tamanho = sizeof(melody) / sizeof(melody[0]);
  for (int i = 0; i < tamanho; i++) {
    tone(buzzer, melody[i], noteDuration[i]);
    delay(noteDuration[i] * 1.3);
    noTone(buzzer);
  }
}