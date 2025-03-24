#include <Ultrasonic.h>

Ultrasonic sensor_distancia(5,6); //instancia um objeto ultrasonic chamado sensor_distancia e passa 2 parâmetros:
                                  //porta trig e porta echo, respectivamente
int led = 13;

void setup() {
    //não é necessário declarar pinMode para o trig e echo pois a própria biblioteca já faz isso automáticamente
}

void loop() {
    if(sensor_distancia.read < 10){ //calcula a distância, acionando o trig e echo, retornando em cm
        digitalWrite(led, HIGH);
    }else{
        digitalWrite(led, LOW);
    }
  }