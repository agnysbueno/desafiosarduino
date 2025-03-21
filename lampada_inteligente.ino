// DECLRAÇÃO DE VARIÁVEIS
int lampada = 10;
int sensor = A1;

void setup(){
    pinMode(lampada, OUTPUT);  //Write - escrever -- enviar (saída)
    pinMode(sensor, INPUT);  //Read - ler -- receber (entrada)

}

void loop(){
    if(analogRead(sensor) < 600);{  //portas analogicas recebem valores de 0 a 1024 '0 = super escuro' '1024 = super claro'
        digitalWrite(lampada, HIGH);
    }else{
        digitalWrite(lampada, LOW);

    } 
    

}