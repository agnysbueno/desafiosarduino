/*********************************** PROJETO ************************************/
/*
dev. Derdlim Naranjo

/*************** DECLARAÇÃO DE VARIÁVEIS ***************/
int potenciometro = A0; //declaração do potenciometro
int valorLido; //variavel auxiliar que guarda o valor de 0 a 1024
int intensidadeLed;
int led = 3; //porta 3 PWM do arduino

void setup(){
    pinMode(potenciometro, INPUT); //Modo do pino - portas Analogicas são IMPUT

    pinMode(led, OUTPUT);
}

/*************** CONFIGURAÇÕES DOS COMPONENTES ***************/
void loop(){
    valorLido = analogRead(potenciometro); //lê o valor que esta dentro do potenciometro de 0 a 1024
    map(valorLido,0, 1024, 0, 255); //valor convertido

    analogWrite(led, intensidadeLed); //Acender o led gradativamente

}



/*
O '.map' ja faz a conta da regra de 3 e não precisa mais fazer as contas manualmente ;
Tem um padrao na sintaxe 'map(valorLido, 0, 1024, 255);
*/