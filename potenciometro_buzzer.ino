//DECLARAÇÃO DE VARIÁVEIS
int buzzer = 5;
int potenciometro = A0;
int valorLido;
int frequencia;


void setup(){
    pinMode(buzzer, OUTPUT);
    pinMode(potenciometro, INPUT);

}

void loop(){
    valorLido = analogRead(potenciometro); //a leitura do potenciometro vai ser guardada na variável 'valorLido'
    frequencia = map(valorLido, 0, 264, 495); //vai ser feita a conversão do potenciometro para frequencia e guardada na variável 'frequencia'
    tone(buzer, frequencia); // tocando a frequencia da nota 'dó' ate 'si'

}