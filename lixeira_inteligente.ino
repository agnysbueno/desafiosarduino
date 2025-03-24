#include <Ultrasonic.h> //biblioteca do sensor de distância
#include <Servo.h> 
Ultrasonic sensor(12, 13); // variavel chamada sensor: trig, echo
Servo motor; //objeto Servo

void setup(){
 motor.attach(9); //porta do servo motor
}

void loop(){
 
 if(sensor.read() < 10){
   motor.write(90); //ângulo para abrir a lixeira
 }else{
    motor.write(0);
 }
}

