// INCLUSÃO DA BIBILIOTECA
#include <Servo.h>
Servo motor;

// DECLARAÇÃO DE VARIÁVEIS
int potenciometro = A0;
int valorLido;
int angulo;


void setup(){
    motor.attach(9); //porta PWM
    pinMode(potenciometro, INPUT); //porta analogica

}

void loop(){
    valorLido = analogRead(potenciometro); //fazer a leitura do potenciometro e guardar na variável 'valorLido'
    angulo = map(valorLido, 0, 1024, 0, 180); //fazer conversão do valoLido para angulo e guardar na variável 'angulo'
    motor.write(angulo); //o servo motor moverá para o angulo definido de acordo com o potenciometro 

}