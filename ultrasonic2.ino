#include <Ultrasonic.h> //incluição da biblioteca
#include <servo.h> //inclução da biblioteca do servo motor

/******************** INSTANCIANDO OBJETOS ********************/
Ultrasonic sensorDistancia(5,6); //instancia um objeto ultrasonic chamado sensorDistancia e passa 2 parametros: 
                                 //porta trig e porta, respectivamente

Servo motor; //instancia um objeto servo chamado 'motor'

/******************** VARIAVEIS AUXILIARES ********************/
int distancia; //variavel auxiliar que guardará o valor lido pelo sensor

void setup(){
//não é necessario declarar pinMode para o trig e echo pois a propia biblioteca ja faz isso automaticamnte
motot.attach(9); // declara a porta do arduino em que o motor esta conectado
}


void loop(){
distancia = sensorDistancia.read();
/*o metodo .read() aciona o trigger do sensor e faz o calculo da distancia, este valor em centimetros sera guardado na variavel 'distancia'*/

/*se a distancia lida pelo sensor sor menor que 10cm, entao o motor moverá para o ângulo 90, fazendo a lixeira abrir
se não o motor se movera para o angulo 0, fazendo a lixeira fechar*/
if(distancia < 10){ 
    motor.write(90); //abre lixeira
}else{
    motor.lWrite(0); //fecha lixeira
}
}

