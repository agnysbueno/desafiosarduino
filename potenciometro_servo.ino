/*********************************** PROJETO ************************************/
/*
dev. Derdlim Naranjo
*/

/*************** DECLARAÇÃO DE VARIÁVEIS ***************/
#include <servo.h>
int angulo; //serve para o motor ir para qualquer angulo
int potenciometro = A0; //declaração do potenciometro
int valorLido; //variavel auxiliar que guarda o valor de 0 a 1024


void setup(){
motor.attach(9); //serve para especidicar qual é a porta do arduino em que esta conectado do motor
pinMode(potenciometro, INPUT); //Modo do pino

}
/*************** CONFIGURAÇÕES DOS COMPONENTES ***************/
void loop(){
    valorLido = analogRead(potenciometro); //lê o valor que esta dentro do potenciometro de 0 a 1024
    angulo = map(valorLido, 0, 1024, 0, 180); //valor convertido
    motor.Write(angulo); //o motor vai para o angulo definido pelo potenciometro
}