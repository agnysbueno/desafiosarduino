#include <Ultrasonic.h> //biblioteca do sensor de distância

Ultrasonic sensor(12, 13); // variavel chamada sensor: trig, echo

int distancia;// variavel aux que vai guardar o valor lido pelo sensor em cm
int led=13; 

void setup(){
 // trig e echo nao tem pinMode
}

void loop(){
 distancia = sensor.read();

 if(distancia<20){
    digitalWrite(led, HIGH);
 }else{
    digitalWrite(led, LOW);
 }
}

