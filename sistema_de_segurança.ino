/*Sistema de segurança residencial:
Objetivo: 

/***************DECLARAÇÃO DE VARIÁVEIS******************/
/*Componentes de Entrada*/
int buzzerAlarme = 9; 
int Lampada1 = 10; 
int Llampada2 = 11;
#include <Servo.h> // servo motor está sendo utilizado como a trava da porta
Servo tranca;
#include <Ultrasonic.h> 
Ultrasonic sensorDist(12, 13);//porta onde está conectado o trigger e o echo, respectivamente
int distancia;

/*Componente de Saída*/
int sensor = A0;  //sensor de luminosidade para saber se está de noite

/*********************CONFIGURAÇÕES DOS COMPONENTES************************** */

void setup(){
    tranca.attach(9); 
    pinMode(buzzerAlarme, OUTPUT);
    pinMode(Lampada1, OUTPUT);
    pinMode(Lampada2, OUTPUT);
    pinMode(sensor, INPUT);

}

/**********************CONDIÇÃO QUE FAZ O PROJETO FUNCIONAR**************************/

/*O alarme será ativado quando a luminosidade estiver menor que 600+96
(< 600 noite) 
(> 600 dia)
máximo  1024*/
void loop(){ 
    if(analogRead(sensor) < 600 && distancia <=12.5)//quando estiver de noite e alguém estiver a uma distância igual ou menor que 12.5 acionará o sistema de segurança;
        dispararAlarme(); //função para acionar o alarme
        trancarPorta(); //função para travar a porta
        piscarLampada(); //função para piscar os leds
    }


/*************************FUNÇÕES DO PROJETO***************************/

/*quando o alarme for disparado o buzzer irá emitir uma frequência sonora*/
void dispararAlarme(){ 
    tone(buzzerAlarme, 260);
}

/*quando o alarme for disparado o motor irá movimentar para trancar a porta*/
void trancarPorta(){ 
    tranca.write(0);
}

/*quando o alarme for disparado os leds 1 e 2 irão acender alternadamente*/
void piscarLampada(){ 
    digitalWrite(Lampada1, HIGH);
    digitalWrite(Lampada2, LOW);
    delay(50);
    digitalWrite(Lampada1, LOW);
    digitalWrite(Lampada2, HIGH);
    delay(50);
}

void lerDist(){
    distancia = sensor.read();
}


/*

FUNÇÃO:
tipo nome(parametro1, parametro2, etc...){} 

exemplo: 
float subtrair(num1,num2){ //cria uma função chamada 'subtrair' do tipo float, pois retornará números reais, e que precisa receber 2 parâmetros: num1 e num2
int resultado; //cria a variável resultado para armazenar o resultado da subtração
resultado = num1 - num2; //faz o cálculo do num1 menos o num2 e armazena esse valor na variável 'resultado'
return resultado; // retorna para a programação o resultado da subtração
}

COMO CHAMAR UMA FUNÇÃO NO CÓDIGO:
subtrair(9,4); // chama a função subtrair e passa os parâmetros 'num1' = 9 e 'num2' = 4

*/