/*************** INCLUSÃO DE BIBLIOTECA ***************/
#include <Ultrasonic.h> //SENSOR
#include <Servo.h> //SERVO MOTOR

/*************** INSTÂNCIANDO OBJETOS ***************/
Ultrasonic sensor_distancia(5,6); //instancia um objeto ultrasonic chamado sensor_distancia e passa 2 parâmetros:
                                  //porta trig e porta echo, respectivamente
Servo motor; //instancia um objeto servo chamado 'motor'

void setup() {
    //não é necessário declarar pinMode para o trig e echo pois a própria biblioteca já faz isso automáticamente
    motor.atach(9); //declara a porta do arduino em que o motor está conectado
}

void loop() {
    /*Se a distancia lida pelo sensor for menor que 10cm, 
    então o motor moverá para o ângulo 90, fazendo a lixeira abrir.
    Caso a distância lida seja igual ou maior que 10cm, 
    o motor moverá para o ângulo 0, fazedo a lixeira fechar*/
    if( (distancia = sensor_distancia.read) < 10){ 

         /*o método .read() aciona o trigger do sensor e faz o cálculo da distância, 
        este valor em cm será guardado na variável 'distancia'
        */

        motor.write(90); //abre a lixeira
    }else{
        motor.write(90); //fecha a lixeira
    }
  }