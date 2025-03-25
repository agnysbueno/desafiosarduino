/*************** DECLARAÇÃO DE VARIÁVEIS ***************/
int potenciometro = A0; //declaração do potenciometro
int valorLido; //variavel que guarda o valor de 0 a 1024


void setup(){
    pinMode(potenciometro, INPUT); //Modo do pino - portas Analogicas são IMPUT

}


void loop(){
    valorLido = analogRead(potenciometro); //lê o valor que esta dentro do potenciometro
    map(valorLido,0, 1024, 0, 255);
}



/*
O '.map' ja faz a conta da regra de 3 e não precisa mais fazer as contas manualmente ;
Tem um padrao na sintaxe 'map(valorLido, 0, 1024, 255);
*/