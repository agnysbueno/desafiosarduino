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
    motor.attach(9)

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
    digitalWride(ledverde, HIGH);
    motor.write(100);
    delay(500);
}else{
     noTone(buzzer);
    digitalWrite(ledverde,LOW)
}

if(estadoBotao == LOW){
    noTone(buzzer);
    digitalWrite(ledvermelho, HIGH);
    motor.write(0);
    delay(3000);

}else{ 
    noTone(buzzer);
    digitalWrite(ledvermelho,LOW)

}

}
