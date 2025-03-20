int ledR = 3;
int ledG = 4;
int ledB = 5;

int btn1 = 6;
int btn2 = 7;
int btn3 = 8;

int estadoBtn1;
int estadoBtn2;
int estadoBtn3;

void setup(){
    pinMode(ledR, OUTPUT);
    pinMode(ledG, OUTPUT);
    pinMode(ledB, OUTPUT);

    pinMode(btn1, INPUT);
    pinMode(btn2, INPUT);
    pinMode(btn3, INPUT);
    
}

void loop(){
    estadoBtn1 = digitalRead(btn1);
    estadoBtn2 = digitalRead(btn2);
    estadoBtn3 = digitalRead(btn3);

if(btn1 = HIGH){
    digitalWrite(ledR, HIGH);
    digitalWrite(ledG, LOW);
    digitalWrite(ledB, LOW);

}else if(btn2 = HIGH){
    digitalWrite(ledR, LOW);
    digitalWrite(ledG, HIGH);
    digitalWrite(ledB, LOW);
}else if(btn3 = HIGH){
    digitalWrite(ledR, LOW);
    digitalWrite(ledG, LOW);
    digitalWrite(ledB, HIGH);

}
}