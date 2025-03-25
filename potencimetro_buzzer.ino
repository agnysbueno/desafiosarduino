/*POTENCIOMETRO COM BUZZER*/


/*************** DECLARAÇÃO DE VARIÁVEIS ***************/
int buzzer = 3; 
int potenciometro = A0; //por conta da variação os potenciometros vão apenas em portas analógicas 
int valorLido; //cria a variável que iremos clocar o valor da frequencia
int frequencia; //cria a variável para colocar a frequencia sonora de Dó e Sí

/*************** CONFIGURAÇÕES DOS COMPONENTES ***************/
void setup(){
    pinMode(potenciometro, INPUT);
    pinMode(buzzer, OUTPUT);
}

/*************** CONDIÇÕES QUE FAZEM O PROJETO FUNCIONAR ***************/
void loop(){
    valorLido = analogRead(potencimetro) //variável adicionando o comando para leitura do potenciometro (0-1024)
    frequencia = map(valorLido, 0, 1024, 264, 495); //valor convertido em regra de 3, usando o valor do potenciometro e as frequencias das notas musicais

    Tone(buzzer, frequencia); // buzzer vai tocar de acordo com a frequencia pedida
}
