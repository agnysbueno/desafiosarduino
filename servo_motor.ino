#include <Servo.h> //inclui a biblioteca chamada servo, que contém os comandos para controlar o servo motor
Servo motor; //Instancia/cria chama um objeto chamado 'Servo', que vem da biblioteca de mesmo nome, e cria uma variável chamada 'motor'
             //esta variável poderia ter qualquer outro nome, ex: motor1, motorDireito, motorFrente...

void setup(){  //Configutrações iniciais e comandos que só são executados uma vez
    motor.attach(9);  //variável 'motor' criada na linha 2 junto do comando 'attatch' para especificar qual é a porta do arduino em que está conectado o motor
    motor.write(0);  //vaariável 'motor' criada na linha 2 junto do comando 'write', que serve para movimentar a hélice do motor para  o ângulol definido (de 0 a 180°)


}

void loop(){  //comandos que serão executados em um looping, ou seja, ficarão repetindo enquanto o arduino estiver ligado
    motor.write(0); //faz o motor ir para posição de 0°
    delay(1000);  //espera 1 segundo
    motor.write(180);  //faz o motor para posição de 180°
    delay(1000);  //espera 1 segundo e retorna para o comando da linha 13

}