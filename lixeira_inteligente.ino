#include <Ultrasonic.h> //Inclusão da biblioteca do sensor de distância

Ulttrasonic sensor(12, 13); /*instancia o objeto Ultrasonic chamado 'sensor'
 passando como parâmetro a porta do 'trig' e 'echo' respectivamente */

int distancia; //variável aux que gurada valor lido pelo sensor em centímentros

 void setup(){
    //não é necessário declarar pinMode para trig e echo
 }

 void loop(){
    distancia = sensor.read();
    if(distancia<20){
        digitalWrite(led, HIGH);
    }
    else{
        digitalWrite(led, LOW); 
    }
 }


