// DECLARAÇÃO DE VARIÁVEIS//
#include <Servo.h>
Servo motor;

int red = 2;
int green =3;
int buzzer = 5;
int botao = 6;

void setup(){
    motor.attach(9);
    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(botao, INPUT);
    motor.write(0);
}

void loop(){
    if(digitalRead(botao, HIGH) == HIGH){
        digitalWrite(green, HIGH);
        motor.write(90);
        tone(buzzer, 495);
        delay(1000);
        noTone(buzzer);
    }

    if(digitalRead(botao, LOW) == LOW){
        digitalWrite(red, HIGH);
        motor.write(0);
    }
}