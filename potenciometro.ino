int potenciometro = A0; /*potenciômetro vai na porta analógica. ANALOGICA vai de 0 a 1024.
O potenciometro tem três pinos. Primeiro VCC, segundo ANALOGICA, terceiro GND*/
//porta analógica sempre vai ser ENTRADA

int valorLido; //variável auxiliar para o potenciometro

int intendidadeLed; //é o valor já calculado e representado na intensidade do LED

int led = 3; //porta PWM



void setup(){
    pinMode(potenciometro, INPUT); //o potenciometro SEMPRE vai na porta ANALÓGICA
    pinMode(led, OUTPUT);
}

void loop(){
    valorLido = analogRead(potenciometro); //é o valor que o potenciometro vai ler e guardar. de 0 a 1024
    map(valorLido, 0, 1024, 0, 255) /*map(valorLido, deMenor, deMaior, paraMenor, paraMaior) valorLido: é o valor que o 
potenciometro vai ser, deManor é o valor minimo da porta analogica, deMaior é o valor máximo. paraMenor é o valor
mínimo da porta PWM e paraMaior é o valor máximo*/

    intensidadeLed = map(valorLido, 0, 1024, 0, 255); //

    analogWrite(led, intensidadeLed);
}



