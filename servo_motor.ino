#include <Servo.h> //incluir a biblioteca chamada Servo que contém os comandos para controlar o servo motor 
Servo motor; //chama (instancia) o objeto "Servo" que vem da bibliotea de mesmo nome, e cria uma variável chamada "motor"
//esta variável poderia ter qualquer outro nome, ex: motor1, motorCentral...

void setup(){
    //CONFIGURAÇÕES INICIAIS E COMANDOS QIE SÓ SÃO EXECUTAOS UMA VEZ
    motor.attach(9); //variável 'motor' criada na linha 2 junto com o comano 'attach' para especificar qual é a porta so aruino que está conectado
    motor.write(0); //variável 'motor' criada na linha 2 junto com o comando 'write', serve para movimentar a hélice do motor para o angulo definido entre parênteses
}

void loop(){
    //COMANDOS QUE SERÃO EXECUTADOS EM LOOP, ENQUANTO O ARDUINO ESTIVER LIGADO
    motor.write(0); //faz o motor ir para 0 graus
    delay(1000); //espera 1 segundo
    motor.write(180); //faz o motor ir para a posição 180 graus 
    delay(1000); //espera 1 segundo e retorna para a linha 13
}