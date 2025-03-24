#include <Ultrasonic.h>/*Inclusão da bibliotec do sensor de distância*/

/*(_________SENSOR ULTRASÔNICO_________)*/

Ultrasonic sensor(12,13);/*Instacia o objeto Ultrassonic e cria uma variável chamada "sensor"*/
/*passando como parâmetro porta 12 = TRIG*/
/*passando como parâmetro porta 13 = ECHO*/

int distancia; /*variável auxiliar que vai guardar o valo lido pelo sensor em centímetros*/
int led = 10;

void setup(){
//não é necessário declarar pinMode paa o trig e o echo
pinMode(led,OUTPUT);
}


void loop(){
    distancia = sensor.read()

    if (distancia < 20){
        digitalWrite(led, HIGH);
    }else{
        digitalWrite(led, LOW);
    }
}