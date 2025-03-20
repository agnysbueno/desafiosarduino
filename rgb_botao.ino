int ledR=4;
int ledG=5;
int ledB=6;

int botaoR=7;
int botaoG=8;
int botaoB=9;

void setup(){
pinMode(ledR, OUTPUT);
pinMode(ledG, OUTPUT);
pinMode(ledB, OUTPUT);
pinMode(botaoR, INPUT);
pinMode(botaoG, INPUT);
pinMode(botaoB, INPUT);
}

void loop(){
    if(digitalRead(botaoR,HIGH)){
    digitalWrite(ledR, HIGH);
    }else if(digitalRead(botaoG,HIGH)){
        digitalWrite(ledG, HIGH);
    }else if(digitalRead(botaoB,HIGH){
        digitalWrite(ledB, HIGH);
    }else{
        digitalWrite(ledR, LOW);
        digitalWrite(ledG, LOW);
        digitalWrite(ledB, LOW);
    }
}

