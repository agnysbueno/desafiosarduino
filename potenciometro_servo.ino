#include <Servo.h>  

int potenciometro = A0; 
int valorLido;
int angulacao;

Servo motor;

void setup(){
    pinMode(potenciometro,INPUT);
    motor.attach(9);  
}

void loop(){
    valorLido = analogRead(potenciometro);
    angulacao = map(valorLido, 0, 1024, 0, 180);
    motor.write(angulacao);
}