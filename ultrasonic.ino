#include <Ultrasonic.h> //incluição da biblioteca
Ultrasonic sensorDistancia(5,6); //instancia um objeto ultrasonic chamado sensorDistancia e passa 2 parametros: 
                                 //porta trig e porta, respectivamente
int led = 13;
void setup(){
//não é necessario declarar pinMode para o trig e echo pois a propia biblioteca ja faz isso automaticamnte
pinMode(led, OUTPUT);
}


void loop(){
if(sensorDistancia.read() < 10){ //read faz todo: calcula a distancia, tempo, aciona trig e echo e retorna em cm
    digitalWrite(led, HIGH);
}else{
    digitalWrite(led, LOW);
}
}

