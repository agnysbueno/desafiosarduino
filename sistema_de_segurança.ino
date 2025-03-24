/* 

Projeto: Sistema de segurança 
Objetivo: Criar um sistema de segurança para uma casa onde se estiver de noite e perto da porta: 
disparar o alarme, trancar a porta e lâmpadas piscarem alternadamente

*/

/***************** DECLARAÇÃO DE VARIÁVEIS *****************/

#include <Servo.h> //Inclusão da biblioteca para o servo motor
Servo tranca; //servo motor está sendo utilizada como trava da porta 
#include <Ultrasonic.h> //Inclusão da biblioteca para o sensor de distância
Ultrasonic sensor(12, 13); //porta onde está conectado o trigger(OUTPUT) e o echo(INPUT), respectivamente
int distancia; //variável auxiliar, onde vai guardar o valor que o sensor ler

int lampadaExterna1 = 10; //lâmpadas da garagem
int lampadaExterna2 = 11; //lâmpadas da garagem 
int alarme = 12; //buzzer
int sensorDeLuz = A0; //sensor de luminosidade para detectar se está de dia ou de noite

/***************** CONFIGURAÇÕES DO COMPONENTE *****************/

void setup(){
    
    tranca.attach(9); //declara o servo motor na porta 9

    /*COMPONENTES DE SAÍDA*/
    pinMode(lampadaExterna1, OUTPUT);
    pinMode(lampadaExterna2, OUTPUT);
    pinMode(alarme, OUTPUT);

   /*COMPONENTES DE ENTRADA*/
    pinMode(sensor, INPUT);
}

/*************** CONDIÇÕES DO PROJETO ***************/

void loop(){
    if(anologRead (sensor < 600) && distancia < 12.5){ 
    /*0 = 0% noite, ou seja, totalmente escuro
    1024 = 100% dia, ou seja, totalmente dia, quase ficamos cegos de tanta luz*/

    //quando estiver de noite, número menor que 600, e alguèm estiver a 12,5cm da porta, acionará o sistema de segurança 
    dispararAlarme(); //funação para acionar o alarme
    trancarPorta(); //função para travar portas
    piscarLampadas(); //função para piscar lâmpadas
    }
}

/*************** FUNÇÕES DO PROJETO ***************/

/*Aciona o alarme sonoro quando o sensor avisar*/
void dispararAlarme(){
    tone(alarme, 261);
}
/*Quando acionado o sensor o motor irá movimentar a tranca da porta*/
void trancarporta(){
    tranca.write(0);
}
/*O piscarLampada vai fazer com que quando acionado pelo sensor as lampadas 1 e 2 pisquem alternadamente*/
void piscarLampada(){
    digitalWrite(lampadaExterna1, HIGH);
    digitalWrite(lampadaExterna2, LOW);
    delay(50);
    digitalWrite(lampadaExterna1, LOW);
    digitalWrite(lampadaExterna2, HIGH);
    delay(50);
}

void lerDistancia(){
    distancia = sensor.read();
}

/*
float subtrair (num1, num2){
    //cria uma função chamada subtrair do tipo float, que é uma função pra números reais 
    //precisa receber dois parametros: num1, num2
int resultado; //cria a variável
resultado = num1 - num2 //faz o resultado e armazena o valor
return resultado; //retorna para a programação o resultado da subtração
}
-----------
como chamar uma função no código:

subtrair(9, 4); num1=9 e num2=4

/*
