/*
BIBLIOTECAS
*/
#include <Ultrasonic.h> //Inclusão da biblioteca do sensor de distância
#include <Servo.h> //Inclusão biblioteca do servo motor

Ulttrasonic sensorDistancia(12, 13); /*instancia o objeto Ultrasonic chamado 'sensor'
 passando como parâmetro a porta do 'trig' e 'echo' respectivamente */

Servo motor;/*instancia o objeto Servo chamado 'motor'*/

//DECLARAÇÃO DE VARIÁVEIS
int lampada = 13;
int buzina = 9;
int btn = 8;
int sensorLuminosidade = A0;
 

void setup(){
    pinMode(lampada, OUTPUT);//emite luz
    pinMode(buzina, OUTPUT)//emite som
    pinMode(btn, INPUT);//botao recebe informacao
    pinMode(sensorLuminosidade, INPUT);//recebe luz

    motor.attach(5); // porta do motor
}

void loop(){
    pararAlarme();
    if(digitalRead(sensorLuminosidade) <= 600 && sensorDistancia.read() <= 500){
        acionarAlarme();
    }
}

void trancarPorta(){
    motor.write(90);
}
void tocarBuzina(){
    tone(buzina, 1000){
    }
}
void piscarLampadas(){
    digitalWrite(lampada, HIGH);
    delay(500);
    digitalWrite(lampada, LOW);
    delay(500);
}
void pararAlarme(){
    if(digitalRead(btn) == HIGH){
    noTone(buzina);
    digitalWrite(lampada, LOW);
    motor.write(0);
    }
}
void acionarAlarme(){
    piscarLampadas();
    tocarBuzina();
    trancarPorta();
}