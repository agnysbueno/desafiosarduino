int potenciometro = A0; //ANALOGICO
int valorLido;
int led = 3;//porta digital pwm
int intensidade;

void setup(){
    pinMode(potenciometro, INPUT);
    pinMode(led, OUTPUT);
}

void loop(){
  valorLido = analogRead(potenciometro);// guarda valor lido
  intensidade = map(valorLido, 0, 1024, 0, 255); // faz a regra de 3
  analogWrite(led, intensidade); //o led foi conectado em uma porta pwm
}