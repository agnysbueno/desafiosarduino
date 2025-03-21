// DECLARAÇÃO DE VARIÁVEIS//
#include <Servo.h>
Servo motor;

int botao = 6;

void setup(){
    motor.attach(9); //porta
    pinMode(botao, INPUT);
    motor.write(0); //ângulo
}

void loop(){
    if(digitalRead(botao) == HIGH){
        motor.write(180);
        delay(10000);
        motor.write(0);  
    }

    else{
        motor.write(0);
    }
}