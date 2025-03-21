//Declaração de Variáveis
#include <Servo.h>
Servo motor;
int ledVermelho = 5;
int ledVerde = 6;
int som = 7;
int botao = 8;

void setup(){
    motor.attach(9);
    pinMode(ledVermelho, OUTPUT);
    pinMode(ledVerde, OUTPUT);
    pinMode(som, OUTPUT);
    pinMode(botao, INPUT);
    motor.write(0);
}
void loop(){
    if(digitalRead(botao) == HIGH){
        delay(5000);
        motor.write(90);
        delay(8000);
        motor.write(0);
        digitalWrite (ledVerde, HIGH);
        digitalWrite (ledVermelho, LOW);
        tone(som, 494);
        delay(2000);
        noTone(som);
    }
    if(digitalReadd(botao) == LOW){
        motor.write(0);
        digitalWrite (ledVermelho, HIGH);
        digitalWrite (ledVerde, LOW);
        noTone(som);
    }
}