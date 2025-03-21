/*sistema de segurança recidencial
sensor distancia, sensor de luz, 1 buzer, 2 lampada
se estive de noite e perto da porta:
disparar o alarme trancar a porta e lampadas piscarem alternadamente
*/

//declaração de variaveis
#include <Servo.h>
Servo tranca; // o servomotor que esta sendo utilizaado como a trava da porta

int lampada1 = 10;
int lampada2 = 11;
int alarme = 12;
int sensor = A0;

void setup(){
tranca.attach(9);
pinMode(lampada1, OUTPUT);
pinMode(lampada2, OUTPUT);
pinMode(alarme, OUTPUT);
pinMode(sensor1, INPUTPUT);

}

void loop(){
if (analogRead(sensor) <600){
    disparAlarme();
    trancaPorta();
    piscarLampadas();
}
}

void dispararAlarme(){
    (tonealarme, 260);    
}

void trancaPorta(){
    tranca.write(0);
}

void piscarLampadas(){
    digitalWrite(lampada2, LOW);
    digitalWrite(lampada1, HIGH);
    delay(50);
    digitalWrite(lampada1, LOW);
    digitalWrite(lampada2, HIGH);
    delay(50);
    
}


/*

SINTAXE PADRAO PARA A CRIAÇÃO DE UMA FUNÇÃO:

tipo nome(parametro1, parametrow,...){
    codigo que a função executará
}

---------------------------------------------------

EXEMPLO DE FUNÇÃO:
cria uma função chamada 'subtrair' do tipo float, pois retornará numero reais,
e que preccisa receber 2 parâmetros: num1 e num2

subtrair(9,4);  //chama a função subtrair e passa os parametros 'num1' =9 e 'num2' = 4

float subtrair(num1,num2){  //cria a variavel resultado para armazenar o resultado da subtração
int resultado;   //faz calculo do num1 menos o nummm2 e armazena esse valor na variavel 'resultado'
resultado = num1 - num 2   //retorna para a programação o resultado da subtração
return resultado;
}

-----------------------------------------------------
COMO CHAMAR UMA FUNÇÃO NO CODIGO

subtrair(9,4); //chama a função subtrair e passa os parâmetros num1 = 9 e 'num2' = 4

*/