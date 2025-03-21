//lixeira abrir quando apertar no botao e ficar por 10 segundos e fechar
//se ninguem apertar no botao lixeir fechada
#include <Servo.h>
Servo motor;
int botao = 7

void setup(){
    motor.attach(6);
    motor.write(0);
    pinMode(botao, OUTPUT);
}

void loop(){
 if(digitalRead(botao) == HIGH){
    motor.write(180);
    delay(10000);
    motor.write(0);
 }else{
    motor.write(0);
 }
}