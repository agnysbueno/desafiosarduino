int potenciometro = A0; //poteciometro
int ledAzul = 3;
int ledVerde = 6;
int ledVermelho = 9;
int valorLido;

void setup(){
    pinMode(ledAzul,OUTPUT);
    pinMode(ledVerde,OUTPUT);
    pinMode(ledVermelho,OUTPUT);
    pinMode(potenciometro,INPUT);
}

void loop(){
    valorLido = analogRead(potenciometro);

    if(valorLido <= 341){
    analogWrite(ledVermelho, map(valorLido, 0, 341, 0, 255));
    analogWirte(ledVerde, 0 );
    analogWirte(ledAzul, 0 );
    }
    if((valorLido <= 682) && valorLido >= 342){
        analogWrite(ledVerde, map(valorLido, 342, 682, 0, 255));
        analogWirte(ledVermelho, 0 );
        analogWirte(ledAzul, 0 );
    }
    else{
        analogWrite(ledAzul, map(valorLido, 683, 1024, 0, 255));
        analogWirte(ledVermelho, 0 );
        analogWirte(ledVerde, 0 );
    }

}