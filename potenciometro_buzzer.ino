int buzzer = 4;
int potenciômetro = A0;
int valorLido;

int frequencia;

void setup{
    pinMode(buzer, OUTPUT);
    pinMode(potenciômetro, INPUT);

}

void loop(){
    valorLido = analogRead(potenciômetro);
    frequencia = map(valorLido, 0, 1024, 260, 495);
    tone(buzzer, frequencia);
}