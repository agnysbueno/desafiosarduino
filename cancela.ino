//Declaração de Variáveis
#include <Servo.h>
Servo motor;
int ledVermelho = 5;
int ledVerde = 6;
int som = 7;
int botao = 8;

void setup(){
    motor.attach(9);
    pinMode(Servo, OUTPUT);
    pinMode(ledVermelho, OUTPUT);
    pinMode(ledVerde, OUTPUT);
    pinMode(som, OUTPUT);
    pinMode(botao, INPUT);
    motor.write(0);
}
void loop(){
    if(digitalRead(botao) == HIGH){
        motor.write(90);
        digitalWrite (ledVerde, HIGH);
        tone(som, 494);
    }
    if(digitalReadd(botao) == LOW){
        motor.write(0);
        digitalWrite (ledVermelho, HIGH);
        noTone(som);
    }
}