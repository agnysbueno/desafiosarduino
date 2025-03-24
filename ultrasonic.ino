#include <Ultrasonic.h> //inclusão da biblioteca

Ultrasonic sensor_distancia(2,3); //instancia um objeto ultrasonic chamado sensor_distancia e passa 2 parâmetros: porta trig e porta echo, respectivamente

int led =13;

void setup(){ //não é necessário declarar pinMode para o trig e echo pois a própria biblioteca já fazz automaticamente
    pinMode(led, OUTPUT);
}

void loop(){
    if(sensor_distancia.read() <10){ //read vai fazer a leitura do que chega no sensor, ele vai fazer o cálculo atraves das informações recebidas e retorna o valor em cm
        digitalWrite(led, HIGH); //write quando envia um sinal, quando escreve algo
    }else{
        digitalWrite(led, LOW);
    }
}
