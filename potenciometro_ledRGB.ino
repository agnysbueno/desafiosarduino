// DECLRAÇÃO DE VARIÁVEIS
int red = 3;
int green = 5;
int blue = 6;
int potenciometro = A0;
int valorLido;
int intensidadeLed;


void setup(){
    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(potenciometro, INPUT);

}

void loop(){
    valorLido = analogRead(potenciometro);
    intensidadeLed = map(valorLido, 0, 1024, 0, 255);

    if(valorLido <= 341){
        analogWrite(red, HIGH);

    }else if(valorLido > 341 && valorLido <= 681){
        analogWrite(green, HIGH);
        analogWrite(red, LOW);
        analogWrite(blue, HIGH);

    }else{
        analogWrite(blue, HIGH);
        analogWrite(red, LOW);
        analogWrite(green, LOW);

    }

}