/*POTENCIOMETRO COM SERVO MOTOR*/


/*************** DECLARAÇÃO DE VARIÁVEIS ***************/
#include <Servo.h> //inclui a biblioteca do servo motor
Servo motor; //chama (instancia) o objeto "Servo" que vem da bibliotea de mesmo nome, e cria uma variável chamada "motor"
int potenciometro = A0 //por conta da variação os potenciometros vão apenas em portas analógicas 
int angulo; //cria a variável que iremos clocar o valor dos ângulos, 0-180
int valorLido; 

/*************** CONFIGURAÇÕES DOS COMPONENTES ***************/
void setup(){
    motor.attach(9); // especificar qual é a porta so aruino que está conectado
    pinMode(potenciometro, INPUT);
}

/*************** CONDIÇÕES QUE FAZEM O PROJETO FUNCIONAR ***************/
void loop(){
    valorLido = analogRead(potenciometro) //variável adicionando o comando para leitura do potenciometro (0-1024)
    angulo = map(valorLido, 0, 1024, 0, 180); //valor convertido em regra de 3, usando o valor do potenciometro e os angulos do servo motor

    motor.write(angulo); //o motor movera para o angulo definido de acordo cm o ptenciometro
}
