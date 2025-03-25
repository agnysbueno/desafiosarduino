/*_____POTENCIÔMETRO_____*/


#include<Servo.>

int potenciometro = A0;
int angulacao; 
int valorLido;

Servo motor;

void setup(){
    motor.attach(9);
    pinMode(potenciometro, INPUT);

}

void loop(){
    valorLido = analogRead(potenciometro);
    angulacao = map(valorLido, 0, 1024, 0, 180); //MAP faz o cálculo da regra de 3
    motor.Write(angulacao);

}
