/*********************************** PROJETO ************************************/
/*
dev. Derdlim Naranjo
sistema de segurança recidencial;
sensor distancia, sensor de luz, 1 buzer, 2 lampadas Esternas
se estive de noite e perto da porta: disparar o alarme trancar a porta e lampadas piscarem alternadamente
*/

/*************** DECLARAÇÃO DE VARIÁVEIS ***************/
#include <Servo.h>
Servo tranca; // o servomotor que esta sendo utilizaado como a trava da porta

#include <Ultrasonic.h>
Ultrasonic sensorDist(12,13);   //porta onde está conectado o trigger e o echo, respectivamente
int distancia;

int lampadaExterna1 = 10;
int lampadaExterna2 = 11;

int alarme = 12; //responsavel de emitir um som

int sensorDeLuz = A0;

/*************** CONFIGURAÇÕES DOS COMPONENTES ***************/
void setup(){
tranca.attach(9); //sevo motor declarado na porta 9 do arduino
 /*componetes de saida*/
pinMode(lampadaExterna1, OUTPUT);
pinMode(lampadaExterna2, OUTPUT);
pinMode(alarme, OUTPUT);

/*componestes de entrada*/
pinMode(sensorDeLuz, INPUT);



}
/*************** CONDIÇÕES QUE FAZEM O PROJETO FUNCIONAR ***************/
/*Alarme ativado quando a luminocidade do dia estiver menos que 600:
0 = 0% aceso, ou seja, totalmente escuro
1024 = 100% aceso
*/
void loop(){            //condição combinada
if (analogRead(sensor) <= 600 && distancia 12.5){ //quando estiver de noite, acionara o sistema de segurança
    disparAlarme(); //aciona o alarme
    trancaPorta();  //trava a porta
    piscarLampadas(); //pisca as lampadas externas
}
void lerDist(){
    distancia = sensor.read();
}

}

/*************** FUNÇÕES DO PROJETO ***************/
void dispararAlarme(){ //aciona alarme sonoro 
    (tonealarme, 260);    
}

void trancaPorta(){ //o motor se movimenta para trancar a porta
    tranca.write(0);
}
/*Lampadas que quando acionadas, piscam alternadamente*/
void piscarLampadas(){
    digitalWrite(lampadaExterna2, LOW);
    digitalWrite(lampadaExterna1, HIGH);
    delay(50);
    digitalWrite(lampadaExterna1, LOW);
    digitalWrite(lampadaExterna2, HIGH);
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