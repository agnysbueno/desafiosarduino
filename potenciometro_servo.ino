/*********************************** PROJETO ************************************/
/*
dev. Derdlim Naranjo
*/

/*************** DECLARAÇÃO DE VARIÁVEIS ***************/
#include <servo.h>
int angulo;
int potenciometro = A0;
int valorLido;


void setup(){
motor.attach(9);
pinMode(potenciometro, INPUT);

}
/*************** CONFIGURAÇÕES DOS COMPONENTES ***************/
void loop(){
    valorLido = analogRead(potenciometro);
    angulo = map(valorLido, 0, 1024, 0, 180);
    motor.Write(angulo);   
}