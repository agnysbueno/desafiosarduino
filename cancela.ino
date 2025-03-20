//buzzer, servo motor e botão
// nota SI
#include <Servo.h>
Servo motor;
int ledR = 3;
int ledG = 4;

int estadobtn;

int btn = 5;
int buzzer = 6;

void setup(){
    pinMode(ledR, OUTPUT);
    pinMode(ledG, OUTPUT);

    pinMode(btn, INPUT);
    pinMode(buzzer,INPUT);

    motor.attach(9);
    motor.Write(0);
}

void loop(){
estadobtn = digitalRead(btn);

if(estadobtn == HIGH){
    digitalWrite(ledG, HIGH);
    tone(buzzer, 494);
    motor.Write(90);
    delay(1000)
    motor.Write(0);
}else if(estadobtn == LOW){
    digitalWrite(ledR, HIGH);
    motor.Write(0)
}

}