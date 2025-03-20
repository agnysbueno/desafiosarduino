//DECLARAÇÃO DE VARIÁVEIS
int led = 3;

void setup(){
    pinMode(led, OUTPUT);
}

void(){
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
}
