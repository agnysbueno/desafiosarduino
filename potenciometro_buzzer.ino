int potenciometro = A0; //poteciometro
int buzzer = 13;
int valorLido;
int frequencia;

void setup(){
    pinMode(buzzer,OUTPUT);
    pinMode(potenciometro,INPUT);
}

void loop(){
    valorLido = analogRead(potenciometro);
    frequencia = map(valorLido, 0, 1024, 264, 495);
    tone(buzzer, frequencia);
}