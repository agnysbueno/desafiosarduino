//declaração de varaives
int botao = 2
int estadoBotao;

void setup();

pinMode(botao, INPUT);
motor.attach(9); 
motor.write(0);


void loop();


motor.write(0); 
delay(1000); 
motor.write(180);
delay(1000);