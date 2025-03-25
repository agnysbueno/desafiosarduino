int motor1 =3;
int motor2 =5;
int btn1 =6;
int btn2=7;
int btn3=8;
int btn4=9;
int buzzer=10;
int pot=A0;
int led1=11;
int led2=12;

void setup() {
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(pot, INPUT);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(btn3, INPUT);
  pinMode(btn4, INPUT);
}

void loop() {
  int valor = analogRead(pot);
  int sinal = map(valor, 0, 1024, 0, 255);
  analogWrite(led1, sinal);
  analogWrite(led2, sinal);

  for (int contador = 0; contador < 4; contador++) {
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    delay(1000);
  }

  if (digitalRead(btn2) == HIGH) {
    digitalWrite(motor1, LOW);
    digitalWrite(motor2, LOW);
  }

  if (digitalRead(btn1) == HIGH) {
    digitalWrite(motor1, HIGH);
    digitalWrite(motor2, LOW);
  }

  if (digitalRead(btn3) == HIGH) {
    digitalWrite(motor1, LOW);
    for (int cont = 0; cont <= 255; cont++) {
      analogWrite(motor2, cont);
      delay(500);
    }
  }

  if (digitalRead(btn4) == HIGH) {
    tone(buzzer, 264);
    delay(1000);
    noTone(buzzer);
  }
}