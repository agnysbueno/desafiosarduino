/********** DECLARAÇÃO DE VAIÁVEIS *********/
int lampada = 13;
int sensor = A0;

void setup(){
    pinMode(lampada, OUTPUT);//emite luz
    pinMode(sensor, INPUT);//recebe luz
}

void loop(){
    /*
    Se o valor lido pelo sensor de luminosidade for igual ou maior que 600;
    significa q está claro, portanto apagar a lampada.
    Senão está escuro, então lampadaacende
    */
    if(anlogRead(sensor) >=600){
        digitalWrite(lampada, LOW);
    }
    else{
        digtalWrite(lampada,HIGH);
    }
}