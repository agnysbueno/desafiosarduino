#include <Ultrasonic.h> //by Erick Simões versão 3.0.0

Ultrasonic sensor(12, 13); //porta onde está conectado o trigger e o echo, respectivamente
int distancia;

void setup() {
  Serial.begin(9600);
}

void loop() {
  distancia = sensor.read();
  
  Serial.print("Distancia em cm: ");
  Serial.println(distancia);
  delay(1000);
}