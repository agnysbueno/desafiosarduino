led 
buzzer 
servomotor
btn
led

//DECLARAÇÃO DE VARIÁVEIS
#include <Servo.h>

int ledRed = 9;
int ledGreen = 10;
int btn = 3;
int buz = 4;
Servo motor;

void setup(){
    pinMode(ledRed, OUTPUT);
    pinMode(ledGreen, OUTPUT);
    pinMode(buz, OUTPUT);
    pinMode(btn, INPUT);  
    motor.aattach(5);  
    motor.write(0);
}
nota si


void loop(){
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, HIGH);
    
    if(digitalRead(btn)== HIGH){
        digitalWrite(ledGreen, HIGH);
        tone(buz, 494);
        motor.write(90);
        delay(10000);
        digitalWrite(ledRed, HIGH);
        digitalWrite(ledGreen, LOW);
        noTone(buz);
        motor.write(0);
        
    }

   
}
