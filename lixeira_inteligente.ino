#include <Ultrasonic.h>/*Inclusão da bibliotec do sensor de distância*/

/*(_________SENSOR ULTRASÔNICO_________)*/

Ultrasonic sensor(12,13);/*Instacia o objeto Ultrassonic e cria uma variável chamada "sensor"*/
/*passando como parâmetro porta 12 = TRIG*/
/*passando como parâmetro porta 13 = ECHO*/

int distancia; /*variável auxiliar que vai guardar o valo lido pelo sensor em centímetros*/
int led = 10;

void setup(){
//não é necessário declarar pinMode paa o trig e o echo
motor.attach(9);// define a porta em que o servo motor está conectado no arduíno
}


void loop(){
    /*Se o valor lido pelo sensor de distância for menor que 10 centímetros,
    então o motor moverá para o ângulo 90°, abrindo o lixeira
    Se o valor lido for maior ou igual a 10cm, então o motor moverá para 0° e a lixeira fechará*/
    

    if (sensor.read < 20){
        motor.write(90); //abre a lixeira
    }else{
        motor.attach(0); //fecha a lixeira
    }
}