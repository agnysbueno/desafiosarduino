/* 

Projeto criado por: Agnys Bueno
Objetivo: Este projeto é o protótipo do circuito eletrônico de um motocicleta,
contando com freio, acelerador, marcha a ré, buzina, faróis e setas.

*/


/*************** DECLARAÇÃO DE VARIÁVEIS ***************/
/* Roda traseira da moto */
int motorTraseiroFrente = 3; //terminal do motor DC que quando recebe HIGH faz o motor girar para frente, no sentido horário
int motorTraseiroTras = 5;   //terminal do motor DC que quando recebe HIGH faz o motor girar para trás, no sentido anti-horário

/* Botões que controlam o motor da roda traseira */
int re; //botão que quando pressionado aciona a marcha a ré do veículo
int freio; //botão que quando pressionado faz o veículo parar
int acelerador; //botão que quando pressionado aciona o acelerador do veículo, fazendo-o se mover

/* Sistema da buzina */
int buzzer; //responsável por emitir os sons da buzina
int buzina; //botão que quando pressionado aciona a buzina do veículo

/* Sistema dos faróis */
int ledDireita; //lâmpada posicionada do lado direito do veículo, usada para seta e farol
int ledEsquerda; //lâmpada posicionada do lado direito do veículo, usada para seta e farol
int farol; //potenciômetro utilizado para controlar a intensidade da luz dos faróis


/*************** CONFIGURAÇÕES DOS COMPONENTES ***************/
void setup() {
  /* Componentes de saída */
  pinMode(motorTraseiroFrente, OUTPUT);
  pinMode(motorTraseiroTras, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledDireita, OUTPUT);
  pinMode(ledEsquerda, OUTPUT);

  /* Componentes de entrada */
  pinMode(re, INPUT); 
  pinMode(freio, INPUT); 
  pinMode(acelerador, INPUT); 
  pinMode(buzina, INPUT);
  pinMode(farol, INPUT);
}

/*************** CONDIÇÕES QUE FAZEM O PROJETO FUNCIONAR ***************/
void loop() {

  /*Se o botão do freio for acionado, chama o método 'frear()' para parar o veículo*/
  if(digitalRead(freio)==HIGH){
    frear();
  }

  /*Se o botão da ré for acionado, chama o método 'darMarchaARe()' para o veículo andar para trás*/
  if(digitalRead(re)==HIGH){
    darMarchaARe();
  }

  /*Se o botão do acelerador for acionado, chama o método 'acelerar()' para movimentar o veículo*/
  if(digitalRead(acelerador)==HIGH){
    acelerar();
  }

  /*Se o botão da buzina for acionado, chama o método 'buzinar()' para tocar o som da buzina do veículo*/
  if(digitalRead(buzina)==HIGH){
    buzinar();
  }

}

/*************** FUNÇÕES DO PROJETO ***************/

/*Envia 0V para os dois terminais do motor*/
void frear() {
  digitalWrite(motorTraseiroFrente, LOW);
  digitalWrite(motorTraseiroTras, LOW);
}

/*Envia 5V para o terminal do motor que o faz girar em sentido anti-horário*/
void darMarchaARe() {
  digitalWrite(motorTraseiroFrente, HIGH);
  digitalWrite(motorTraseiroTras, LOW);
}

/*Envia 5V para o terminal do motor que o faz girar em sentido horário,
aumentando gradativamente o sinal lógico*/
void acelerar() {
  digitalWrite(motorTraseiroFrente, LOW);
  for (int cont = 0; cont <= 255; cont++) {
    analogWrite(motorTraseiroTras, cont);
    delay(500);
  }
}

/*Acende os dois leds de acordo com a intensidade definida pelo potênciometro,
podendo ser ela um valor de 0 a 255:
0 = 0% aceso, ou seja, totalmente apagado
255 = 100% aceso*/
void acenderFarol() {
  int valor = analogRead(farol);
  int intensidade = map(valor,0,1024,0,255);
  analogWrite(ledDireita, intensidade);
  analogWrite(ledEsquerda, intensidade);
}

/*Pisca um dos leds de acordo com o lado definido, ou seja,
o parâmetro "lado" representa o nome da variável do led que será acionado:
ledDireita = piscará o led da direita
ledEsquerda = piscará o led da esquerda
O led escolhido piscará 4 vezes
*/
void darSeta(lado) {
  for (int contador = 0; contador < 4; contador++) {
    digitalWrite(lado, HIGH);
    delay(1000);
    digitalWrite(lado, LOW);
    delay(1000);
  }
}

/*Aciona o buzzer para tocar a nota DÓ durante 1 segundo e depois desliga*/
void buzinar(){
  tone(buzzer, 264);
  delay(1000);
  noTone(buzzer);
}