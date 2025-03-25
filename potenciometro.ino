int potenciometro = A0; //potenciômetro
int led = 6; //porta digital PWM
int intesidade;

int valorLido; //variável auxiliar


void setup(){
    pinMode(potenciometro, INPUT);
    pinMode(led, OUTPUT);
}

void loop(){
    valorLido = (potenciometro);
    intensidade = map(valorLido, 0, 1024, 0, 255); // map faz o cálculo da regra de 3
    analogWrite(led, intesidade);
}