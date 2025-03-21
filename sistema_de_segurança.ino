// DECLARAÇÃO DE VARIÁVEIS
int sensor = A0;  //sensor de luminosidade para saber se está de noite
int alarme = 9;
int lampada1 = 10;
int lampada2 = 11;
#include <Servo.h> // servo motor está sendo utilizado como a trava da porta
Servo motor;

void setup(){
    tranca.attach(9);
    pinMode(alarme, OUTPUT);
    pinMode(lampada1, OUTPUT);
    pinMode(lampada2, OUTPUT);
    pinMode(sensor, INPUT);

}

void loop(){
    if(analogRead(sensor) < 600 ){ //quando estiver de noite, adicionará o sistema de segurança:
        dispararAlarme();
        trancarPorta();
        piscarLampada();
    }

}

void dispararAlarme(){
    tone(alarme, 260);
}

void trancarPorta(){
    tranca.write(0);
}

void piscarLampada(){
    digitalWrite(lampada1, HIGH);
    digitalWrite(lmapada2, LOW);
    delay(50);
    digitalWrite(lampada1, LOW);
    digitalWrite(lampada2, HIGH);
    delay(50);
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