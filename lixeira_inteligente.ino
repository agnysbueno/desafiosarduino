#include <Ultrasonic.h> //Inclusão da biblioteca do sensor de distância
#include <Servo.h> //Inclusão biblioteca do servo motor

Ulttrasonic sensor(12, 13); /*instancia o objeto Ultrasonic chamado 'sensor'
 passando como parâmetro a porta do 'trig' e 'echo' respectivamente */

Servo motor;/*instancia o objeto Servo chamado 'motor'*/

 void setup(){
    //não é necessário declarar pinMode para trig e echo

    servo.attach(9); //define a porta em que o servo motor está conectado no arduino
 }

 void loop(){
    /* Se a distancia lida pelo sensor for menor que 10cm motor se moverá para 90°,
    senão motor se moverá para 0° 
    */
    if(sensor.read() < 10){
        motor.write(90);//abre lixeira
    }
    else{
        motor.write(0);//fecha lixeira
    }
 }


