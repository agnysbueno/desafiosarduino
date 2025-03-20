//DECLARAÇÃO DE VARIÁVEIS
int ledRed = 9;
int ledGreen = 10;
int ledBlue = 11;
int BotaoRed = 3;
int BotaoGreen = 4;
int BotaoBlue = 5;


void setup(){
    pinMode(ledRed, OUTPUT);
    pinMode(ledGreen, OUTPUT);
    pinMode(ledBlue, OUTPUT);

    pinMode(BotaoRed, INPUT);
    pinMode(BotaoGreen, INPUT);
    pinMode(BotaoBlue, INPUT);
}

void loop(){
    
    if(digitalRead(BotaoRed)== HiGH){
        digitalWrite(ledRed, HIGH);
    }

    else if(digitalRead(BotaoGreen)== HiGH){
        digitalWrite(ledGreen, HIGH);
    }

    else if(digitalRead(BotaoBlue)== HiGH){
        digitalWrite(ledBlue, HIGH); 
    }
    else {
        digitalWrite(ledBlue, LOW);
        digitalWrite(ledGreen, LOW);
        digitalWrite(ledRed, LOW);
    }


}