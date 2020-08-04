//Teste para saber se as rodas giram no sentido correto ("para frente" e andando em linha reta)

/*Pinagem do arduino*/
 
//motor_A
int IN1 = 10;
int IN2 = 11;
 
//motor_B
int IN3 = 8;
int IN4 = 9;

//Inicializa Pinos
void setup()
{
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
}
 
void loop()
{
  //Liga a rotação dos motores girando para frente e andando em linha reta
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}
