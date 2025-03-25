/*********************************** PROJETO ************************************/
/*
dev. Derdlim Naranjo
*/

/*************** DECLARAÇÃO DE VARIÁVEIS ***************/
int ledR = 3; 
int ledG = 5;
int ledB = 6;
int potenciometro = A0; //declaração do potenciometro
int valorLido; //variavel auxiliar que guarda o valor de 0 a 1024
int intencidade; //intencidade do led RGB


/*************** CONFIGURAÕES DOS COMPONENTES ***************/
void setup(){
    pinMode(ledR, INPUT);
    pinMode(ledG, INPUT);
    pinMode(ledB, INPUT);
    pinMode(potenciometro, INPUT); //Modo do pino


}
/*************** CONDIÇÕES DOS COMPONENTES ***************/
void loop(){
    valorLido = analogRead(potenciometro); //lê o valor que esta dentro do potenciometro de 0 a 1024
    intencidade = map(valorLido, 0, 1024, 0, 255); //valor convertido
    
 if (valorLido <= 340) { //executa terço 1
    analogWrite(ledR, HIGH);
}else if(vslorLido > 340 && vslorLido <= 681){ //executa terço 2 
    analogWrite(ledR, LOW);
    analogWrite(ledG, HIGH);
    analogWrite(ledB, LOW);
}else{                       //executa terço 3
    analogWrite(ledB, LOW);
    analogWrite(ledG, LOW);
    analogWrite(ledB, HIGH);
}
    
}

/*1- 0   -> 340
2- 341 -> 681
3- 682 -> 1084
*/