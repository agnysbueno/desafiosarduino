#include <Ultrasonic.h>
#include <Servo.h>

int botao = 5;
int buzzer = 6;
int lampada = 4;
int sensorLuz = A0;

Ultrasonic sensorMuro(12,13);


void setup(){
motor.attach(9);

    pinMode(sensorLuz, INPUT);
    pinMoe(buzzer, OUTPUT);

    pinMode(botao, INPUT);
    pinMode(lampada, OUTPUT)

}


void loop(){
    if((sensorMuro.Read() < 500) && (analogRead(sensorLuz) <= 600)){
        TrancarPorta();
        piscarLampada();
        acionarAlarme();

    }

    if(digitalRead(botao)==HIGH){
        reiniciarSistema();
    }

}





//A PORTA VAI SER TRANCADA QUANDO FOR CHAMADA
void TrancarPorta(){
    motor.Write(90);
}

//LAMPADA(LED) IRÁ FICAR PISCANDO QUANDO FOR CHAMADA
void piscarLampada(){
    digitalWrite(lampada, HIGH);
    delay(500);
    digitalWrite(lampada, LOW);
    delay(500);
}

// QUANDO O BOTÃO FOR PRESSIONADO O ALARME IRÁ PARAR
void pararAlarme(){
    if(botao) == HIGH{
        noTone(buzzer);
    }
    
}

// ALARME VAI FICAR TOCANDO QUANDO A FUNÇÃO FOR CHAMADA
void acionarAlarme(){
    tone(buzzer, 40);
    delay(300);
    noTone(buzzer);
    delay(300);
}

//REINICIA O SISTEMA DESLIGANDO A LAMPADA E O ALARME
void reiniciarSistema(){
    digitalWrite(lampada, LOW);
    noTone(buzzer);
}