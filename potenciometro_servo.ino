#include <Servo.h>
int potenciometro = A0;
Servo motor;
int valorLido;

void setup(){

    motor.attach(9);
    pinMode(potenciometro, INPUT); 

}

void loop(){

    valorLido = analogRead(potenciometro);
    angulacao = map(valorLido, 0, 1024, 0, 180);
    motor.Write(angulacao);

}