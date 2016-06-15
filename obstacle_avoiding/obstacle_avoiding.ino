#include <Ultrasonic.h>

int IN1=3;
int IN2=4;
int ENA=10;

int IN3=5;
int IN4=6;
int ENB=11;
int Speed=255;
int sens1,sens2,sens3;


Ultrasonic ultrasonic1(2,7); 
Ultrasonic ultrasonic2(8,9); 
Ultrasonic ultrasonic3(13,12); 
void setup() {
   pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (ENA, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (ENB, OUTPUT);
  Serial.begin(9600); 
}

void loop()
{
  sens1=ultrasonic1.Ranging(CM);
  sens2=ultrasonic2.Ranging(CM);
  sens3=ultrasonic3.Ranging(CM);
  if ((sens1<25)|| (sens2<25)|| (sens3<25)){  
  left();}
  
  if ((sens1>25)&& (sens2>25)&& (sens3>25)){
    forward();}
 
}



void left(){
  analogWrite (ENA, Speed);
  analogWrite (ENB, Speed);
  digitalWrite (IN1, 0);
  digitalWrite (IN2, 1);
  digitalWrite (IN3, 0);
  digitalWrite (IN4, 1);
}
void right(){
  
  analogWrite (ENA, Speed);
  analogWrite (ENB, Speed);
  digitalWrite (IN1, 1);
  digitalWrite (IN2, 0);
  digitalWrite (IN3, 1);
  digitalWrite (IN4, 0);
}
void Stop(){
 analogWrite (ENA, 0);
  analogWrite (ENB, 0);
  digitalWrite (IN1, 0);
  digitalWrite (IN2, 0);
  digitalWrite (IN3, 0);
  digitalWrite (IN4, 0);
}
void forward(){
  analogWrite (ENA, Speed);
  analogWrite (ENB, Speed);
  digitalWrite (IN1, 0);
  digitalWrite (IN2, 1);
  digitalWrite (IN3, 1);
  digitalWrite (IN4, 0);
}
void backward(){
 analogWrite (ENA, Speed);
  analogWrite (ENB, Speed);
  digitalWrite (IN1, 1);
  digitalWrite (IN2, 0);
  digitalWrite (IN3, 0);
  digitalWrite (IN4, 1);
}
