/*************** INCLUSÃO DE BIBLIOTECA ***************/
#include <Ultrasonic.h> //SENSOR

/*************** INSTÂNCIANDO OBJETOS ***************/
Ultrasonic sensor_distancia(5,6); //instancia um objeto ultrasonic chamado sensor_distancia e passa 2 parâmetros:
                                  //porta trig e porta echo, respectivamente

int led  13;

void setup() {
    //não é necessário declarar pinMode para o trig e echo pois a própria biblioteca já faz isso automáticamente
    pinMode(led, OUTPUT);
}

void loop() {
    /*o método .read() aciona o trigger do sensor e faz o cálculo da distância, 
    este valor em cm será guardado na variável 'distancia'
    */

  /*se a distância for menor que 10, vai acender o led */
    if( sensor_distancia.read() < 10){ 
        digitalWrite(led, HIGH);
    }else{
        digitalWrite(led, LOW);
    }
  }
