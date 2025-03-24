/***DECLARAÇÃO DE VARIÁVEIS***/
int lampada = 13;
int sensor = A0; //sensor de luz conectado na porta analogica

void setup(){
    pinMode(lampada, OUTPUT);
    pinMode(sensor, INPUT);
}

void loop(){
    //se a a luminosidade estiver maior ou igual a 512 ele apaga a luz se nao ele acende
    if(analogRead(sensor)>=512){
        digitalWrite(lampada, LOW);
    }else{
        digitalWrite(lampada, HIGH);
    }
}