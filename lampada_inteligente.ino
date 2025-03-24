//*********DECLARAÇÃO DE VARIAVEIS*********
int lampada = 13;
int sensor = A0; //SENSOR DE LUMINOSIDADE CONECTADA A PORTA A0



void setup(){
    pinMode(lampada, OUTPUT);
    pinMode(sensor, INPUT);
}

void loop(){
    /*Se o valor lido pelo sensor de luminosidade for igual ou maior que 600
    significa que está claro, etão ele irá apagar a lâmpada,
    caso cointrário a lâmpada acenderá*/

    if(analogRead(sensor) >= 600){
        digitalWrite(lampada, LOW);
    }
    else{
        digitalWrite(lampada, HIGH);
    }
}