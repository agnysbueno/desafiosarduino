int potenciometro = A0; //porta conectada ao potenciometro
int valorLido; //variável auxiliar
int led = 6; //porta digital PWM


void setup(){
    pinMode(potenciomentro, INPUT); //recebe dados
    pinMode(led, OUTPUT); //led saida de luz
}

void loop(){
    valorLido = analogRead(potenciometro); //guarda valor lido do potenciometro na variável
    intensidade = map(valorLido, 0, 1024, 0, 255); //intensidade do led com valores entre 0 e 255  
    analogWrite(led,intensidade); //intesidade que acende o led
}