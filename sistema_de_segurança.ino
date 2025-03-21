//SISTEMA DE SEGURANÇA PARA UMA CASA
//Se estiver de noite e perto da porata: disparar o alarme, trancar a porta e lampadas piscarem alternadamente
#include <Servo.h>
Servo tranca; //servo motor está sendo utilizada como trava da porta 
int lampada1 = 10;
int lampada2 = 11;
int alarma = 12; //buzzer
int sensor = A0; // sensor de luminosidade

void setup(){
    pinMode(lampada1, OUTPUT);
    pinMode(lampada2, OUTPUT);
    pinMode(alarme, OUTPUT);
    pinMode(sensor, INPUT);
}

void loop(){
    if(anologRead (sensor < 600)){
    //quando estiver de noite, acionará o sistema de segurança
    dispararAlarme();
    trancarPorta();
    piscarLampadas();
    }
}

void dispararAlarme(){
    tone(alarme, 261);
}

void trancarporta(){
    tranca.write(0);
}

void piscarLampada(){
    digitalWrite(lampada1, HIGH);
    digitalWrite(lampada2, LOW);
    delay(50);
    digitalWrite(lampada1, LOW);
    digitalWrite(lampada2, HIGH);
    delay(50);
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
