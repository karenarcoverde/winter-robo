/*  Robô que desvia de obstáculos e emite som do R2-D2 
 *  IMPORTANTE: CONSIDERAR O REFERENCIAL DE UMA PESSOA NA TRASEIRA DO ROBÔ
 *  PARA UM MELHOR ENTENDIMENTO DO CÓDIGO
 */

// Definindo as bibliotecas para o sensor ultrassônico, servo motor e notais musicais
#include <Ultrasonic.h>
#include <Servo.h>
#include "musical_notes.h"

// Definindo as entradas e saídas com seus respectivos pinos
#define pinoServo 7 
#define Trig 2 // pino usado para disparar os pulsos do sensor
#define Echo 3 //pino para ler a saída do sensor
#define B1A 8
#define B1B 9
#define A1A 10
#define A1B 11

int distanciaD; // distância da Direita
int distanciaE; // distância da Esquerda
int buzzerPin = 6; // pino do buzzer ativo 

float distanciaObstaculo = 35; // Distância escolhida do robô até o obstáculo para fazer a comparação 

Ultrasonic ultrasonico(Trig, Echo);

Servo servo;

void setup() 
{
  Serial.begin(9600);
  
  servo.attach(pinoServo);
  //pinos da ponte H - definindo os pinos da ponte H como saída
  pinMode(B1A, OUTPUT); 
  pinMode(B1B, OUTPUT);
  pinMode(A1A, OUTPUT);
  pinMode(A1B, OUTPUT);
  pinMode(buzzerPin, OUTPUT); // pino do buzzer ativo como saída
  
  servo.write(90); // Servo posiciona-se no 90° (metade/meio)
  
}

void loop() 
{

  Serial.println(ultrasonico.Ranging(CM)); // Mostra no Monitor Serial a distância até o obstáculo em na unidade de cm 
  
  if (ultrasonico.Ranging(CM) <= distanciaObstaculo) // Se a distância até o obstáculo for menor que 35 cm
  {
    Andar(5); // Freia 
      int statuss = Radar(); // retorna o resultado da comparação da distância da Direita com a da Esquerda
      delay(500);
      if (statuss == 1) // Se a distância da esquerda for maior que a distância da direita
      {
        Andar(2); // anda para trás
        delay(600);
        Andar(4); // faz curva para esquerda
        delay(400);
        Andar(5); // FREIA
      }
      if (statuss == 2) // Se a distância da direita for maior que a distância da esquerda
      {
        Andar(2); // anda para trás
        delay(600);
        Andar(3); // faz curva para direita
        delay(400);
        Andar(5); // FREIA
      }
      if (statuss == 0) // Se a distância da direita for igual a distância da esquerda
      {
        Andar(2); // anda para trás
        delay(500);
        Andar(4); // faz curva para esquerda
        delay(300);
        Andar(5); // FREIA
      }
      delay(1000);
    }
  else 
  {
    Andar(1); // anda para frente
  }
}

void Andar(int direcao)
{
  if (direcao == 1)  // anda pra frente
  {
    digitalWrite(B1A, HIGH); // roda esquerda gira para frente
    digitalWrite(B1B, LOW); 
    digitalWrite(A1A, HIGH); // roda direita gira para frente
    digitalWrite(A1B, LOW);
  }

  if (direcao == 2)  // anda pra trás
  {
    digitalWrite(B1A, LOW); // roda esquerda gira para trás
    digitalWrite(B1B, HIGH);
    digitalWrite(A1A, LOW); // roda direita gira para trás
    digitalWrite(A1B, HIGH);
  }

  if (direcao == 3)  // faz curva pra direita
  {
    digitalWrite(B1A, HIGH);  // roda esquerda gira para frente
    digitalWrite(B1B, LOW);
    digitalWrite(A1A, LOW); // roda direita gira para trás
    digitalWrite(A1B, HIGH);
  }

  if (direcao == 4)  // faz curva pra esquerda
  {
    digitalWrite(B1A, LOW); // roda esquerda gira para trás
    digitalWrite(B1B, HIGH);
    digitalWrite(A1A, HIGH); // roda direita gira para frente
    digitalWrite(A1B, LOW);
  }

  if (direcao == 5)  // FREIA
  {
    digitalWrite(B1A, LOW); // roda esquerda desliga
    digitalWrite(B1B, LOW);
    digitalWrite(A1A, LOW); // roda direita desliga
    digitalWrite(A1B, LOW);
    r2D2();
  }
}

int Radar() 
{
  delay(1000);
  servo.write(175); // Servo posiciona-se no 175° (sensor gira para esquerda)
  delay(1000);
  distanciaE = ultrasonico.Ranging(CM); // captura o valor da distância da esquerda

  delay(1000);
  servo.write(10); // Servo posiciona-se no 10° (sensor gira para direita)
  delay(1000);
  distanciaD = ultrasonico.Ranging(CM); // captura o valor da distância da direita

  delay(1000);
  servo.write(90);

  if (distanciaE > distanciaD)
  {
    return 1; // se tiver espaço na esquerda
  }
  if (distanciaE < distanciaD)
  {
    return 2; //se tiver espaço na direita
  }
  if (distanciaE == distanciaD)
  {
    return 0;
  }
}

// Emite o Som
void beep (int speakerPin, float noteFrequency, long noteDuration)
{    
  int x;
  
  float microsecondsPerWave = 1000000/noteFrequency;
  float millisecondsPerCycle = 1000/(microsecondsPerWave * 2);
  float loopTime = noteDuration * millisecondsPerCycle;
  for (x=0;x<loopTime;x++)   
  {   
    digitalWrite(speakerPin,HIGH); 
    delayMicroseconds(microsecondsPerWave); 
    digitalWrite(speakerPin,LOW); 
    delayMicroseconds(microsecondsPerWave); 
  } 
}     

void r2D2() // Notas musicais do robô R2-D2
{
          beep(buzzerPin, note_A7,100); //A 
          beep(buzzerPin, note_G7,100); //G 
          beep(buzzerPin, note_E7,100); //E 
          beep(buzzerPin, note_C7,100); //C
          beep(buzzerPin, note_D7,100); //D 
          beep(buzzerPin, note_B7,100); //B 
          beep(buzzerPin, note_F7,100); //F 
          beep(buzzerPin, note_C8,100); //C 
          beep(buzzerPin, note_A7,100); //A 
          beep(buzzerPin, note_G7,100); //G 
          beep(buzzerPin, note_E7,100); //E 
          beep(buzzerPin, note_C7,100); //C
          beep(buzzerPin, note_D7,100); //D 
          beep(buzzerPin, note_B7,100); //B 
          beep(buzzerPin, note_F7,100); //F 
          beep(buzzerPin, note_C8,100); //C 
}
