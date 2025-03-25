/*CÓDIGO BASE - POTENCIOMETRO USANDO O LED*/


/*************** DECLARAÇÃO DE VARIÁVEIS ***************/
int potenciometro = A0; //por conta da variação os potenciometros vão apenas em portas analógicas 
int valorLido;
int intensidadeLed;
int led = 3;

/*************** CONFIGURAÇÕES DOS COMPONENTES ***************/
void setup(){
    pinMode(potenciometro, INPUT);
    pinMode(led, OUTPUT);
}

/*************** CONDIÇÕES QUE FAZEM O PROJETO FUNCIONAR ***************/
void loop(){
    valorLido = analogRead(potenciometro) //variável adicionando o comando para leitura do potenciometro (0-1024)
    map(valorLido, 0, 1024, 0, 255); //valor convertido em regra de 3

    analogWrite(led, intensidadeLed) //pega o valor convertido e envia para o led
}

/* OBS:
map(valorLide, 0, 1024, 0, 255) - sempre seguir essa ordem sendo 0-1024 parao potenciometro e 0-255 para o led, por estar em uma porta PWM(0-255)
*/