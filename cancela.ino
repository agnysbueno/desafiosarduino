//led vermelho, verde, buzzer, botao, servo motor

//declaração de variaveis
#include <Servo.h>
Servo motor;

//Led
int ledvermelho = 3;
int ledverde = 4;

//Buzzer
int buzzer = 5;

//botão
int botao = 6;
int estadoBotao;

void setup() {
//declarção de motor
    motor.attach(9);

    pinMode(ledvermelho, OUTPUT);
    pinMode(ledverde, OUTPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(botao, INPUT); //
    
    // serve para mandar o motor em algum angulo "(0)"
    motor.write(0);
}

void loop(){
estadoBotao = digitalRead(botao);

if(estadoBotao == HIGH){
    tone(buzzer, 494);
    delay(100);
    digitalWrite(ledverde, HIGH);
    digitalWrite(ledvermelho, LOW);
    motor.write(90);
    delay(6000);
}else{
     noTone(buzzer);
    digitalWrite(ledverde,LOW);
    digitalWrite(ledvermelho, HIGH);
    motor.write(0);
}

}
