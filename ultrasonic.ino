/*************** INCLUSÃO DE BIBLIOTECA ***************/
#include <Ultrasonic.h> //SENSOR

/*************** INSTÂNCIANDO OBJETOS ***************/
Ultrasonic sensor_distancia(5,6); //instancia um objeto ultrasonic chamado sensor_distancia e passa 2 parâmetros:
                                  //porta trig e porta echo, respectivamente

<<<<<<< HEAD
=======
int led  13;

>>>>>>> 1e559a677cc6ecf36b75614f3c1da5869db65c1d
void setup() {
    //não é necessário declarar pinMode para o trig e echo pois a própria biblioteca já faz isso automáticamente
    pinMode(led, OUTPUT);
}

void loop() {
<<<<<<< HEAD
    /*Se a distancia lida pelo sensor for menor que 10cm, 
    então o motor moverá para o ângulo 90, fazendo a lixeira abrir.
    Caso a distância lida seja igual ou maior que 10cm, 
    o motor moverá para o ângulo 0, fazedo a lixeira fechar*/
    if( (distancia = sensor_distancia.read) < 10){ 

         /*o método .read() aciona o trigger do sensor e faz o cálculo da distância, 
        este valor em cm será guardado na variável 'distancia'
        */

        motor.write(90); //abre a lixeira
=======
    /*o método .read() aciona o trigger do sensor e faz o cálculo da distância, 
    este valor em cm será guardado na variável 'distancia'
    */

  /*se a distância for menor que 10, vai acender o led */
    if( sensor_distancia.read() < 10){ 
        digitalWrite(led, HIGH);
>>>>>>> 1e559a677cc6ecf36b75614f3c1da5869db65c1d
    }else{
        digitalWrite(led, LOW);
    }
  }
