#include <servo.h> //inclui a bibliioteca chamada Servo que contem os comandos para controlar o servo motor
Servo motor; //chama o objeto chamado 'Servo' que vem da biblioteca de mesmo nome, e cria uma variavel chamada 'motor'
             //estavariavel poderia ter qualquer outro nome, ex: motor1 motorDireito, motorFrente...

void setup(){
    //configurações iniciais e comandos que so são executados 1 vez
motor.attach(9); //variavel 'motor' criada na linha 2 junto do comando 'attach' que serve para especidicar qual é a porta do arduino em que esta conectado do motor
motor.write(0);  //variavel 'motor' riada na linha 2 junto do comando 'write', que serve para movimentar a helice do motor para o angulo definido (de 0 a 100)

}

void loop(){
    //comandos que serao executados em um loop, ou seja, ficarão repitindo enquanro o arduino estiver ligado
motor.write(0); // faz o motor ir para a pociçao 0 graus
delay(1000);  //espera 1 segundo
motor.write(180); // faz o motor ir para a pociçao 180 graus
delay(1000);  //espera 1 segundo

}