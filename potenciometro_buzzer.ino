/*********************************** PROJETO ************************************/
/*
dev. Derdlim Naranjo
*/

/*************** DECLARAÇÃO DE VARIÁVEIS ***************/
#include <servo.h>
int buzzer = 3; 
int potenciometro = A0; //declaração do potenciometro
int valorLido; //variavel auxiliar que guarda o valor de 0 a 1024
int frecuencia; //frecuencia do buzzer

void setup(){

pinMode(potenciometro, INPUT); //Modo do pino

}
/*************** CONFIGURAÇÕES DOS COMPONENTES ***************/
void loop(){
    valorLido = analogRead(potenciometro); //lê o valor que esta dentro do potenciometro de 0 a 1024
    frecuencia = map(valorLido, 0, 1024, 264, 495); //valor convertido
    tone(buzzer, frecuencia); // tone definido pelo potenciometro
}