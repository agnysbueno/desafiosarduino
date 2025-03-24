/**********INCLUSÃO DE BIBLIOTECAS*****************/
#include <Ultrasonic.h> //inclusão da biblioteca
#include <Servo.h>

/******************INSTANCIANDO OBJTEOS*******************/
Ultrasonic sensor_ultrassonico(2,3); 
/*instancia um objeto ultrasonic chamado sensor_distancia e passa 2 parâmetros: 
porta trig e porta echo, respectivamente*/

Servo motor;

/*******************VARIÁVEIS AUXILIARES*******************/
int distancia: //variável auxiliar que guardará o valor lido pelo sensor

void setup(){ //não é necessário declarar pinMode para o trig e echo pois a própria biblioteca já fazz automaticamente
    motor.attach(9); //declara a porta do arduino em que o motor está conectado
}

void loop(){
    distancia = sensor_ultrassonico.read();
    
/*o método .read() adiciona o trigger do sensor e faz da distância,
este valor em centímetros  será guardado na variável 'distancia' */

/*Se a distancia lida pelo sensror for menor que 10 centímetros,
então o motor moverá para o angulo 90, fazendo a lixeira abrir.
Caso a distancia seja igual a 10 centimetros ou menor,
o motor moverá para o angulo 0, fazendo a lixeira fechar*/

    if(distancia <10 ){
        motorWrite(0) //abre a lixeira
    }else
        motorWrite(90) //fecha a lixeira

    }