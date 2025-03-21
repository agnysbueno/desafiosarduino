int lampada = 7;
int sensor = A0;

void setup(){
    pinMode(lampada, OUTPUT);
    pinMode(sensor, INPUT);
    //OUTPUT sempre relacionado com o camando digitalWrite
    //INPUT sempre relacionado com o camando digitalRead
}

void loop(){
    //portas analógicas recebem valores de 0 a 1024
    // 0 = super escuro    1024 = super claro
 if(analogRead(sensor) < 600){
    digitalWrite(lampada, HIGH);
 }else{
    digitalWrite(lampada, LOW);
}
 }
