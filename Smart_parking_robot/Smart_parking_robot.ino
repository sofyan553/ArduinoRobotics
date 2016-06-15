#include <Ultrasonic.h>

Ultrasonic front(13,12); 
Ultrasonic mid(9,11); 
Ultrasonic back(10,2); 

int IN1=5;
int IN2=4;
int ENA=3;
int IN3=8;
int IN4=7;
int ENB=6;

int x,y,z;
int right2;
int left2;
int mid2;
int speed2=85;
int run=0;
void setup() {
  Serial.begin(9600); 
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (ENA, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (ENB, OUTPUT);
}

void loop()
{
  sense();
  if ((x<10) && (y>20) && (z>20)){
    Stop();
    delay(1000);
    right();
    delay(350);
    backward();
    delay(350);
    left();
    delay(350);
    forward();
    delay(200);
    run=10;
    Stop();
  }
  while (run==10){
    Stop();  }
   if ((right2>700) && (left2>700)){
   forward(); }
  if ((right2<300)&&(left2>700)) {
    left(); }
  if ((right2>700)&&(left2<300)) {
    right();
  }
}
void sense(){
  x=front.Ranging(CM);
  y=mid.Ranging(CM);
  z=back.Ranging(CM);
  right2=analogRead(A0);
  mid2=analogRead(A1);
  left2=analogRead(A2);
}

void backward(){
  analogWrite (ENA, speed2);
  analogWrite (ENB, speed2);
  digitalWrite (IN1, 0);
  digitalWrite (IN2, 1);
  digitalWrite (IN3, 0);
  digitalWrite (IN4, 1);
}
void forward(){
  
  analogWrite (ENA, speed2);
  analogWrite (ENB, speed2);
  digitalWrite (IN1, 1);
  digitalWrite (IN2, 0);
  digitalWrite (IN3, 1);
  digitalWrite (IN4, 0);
}
void Stop(){
  analogWrite (ENA, 0);
  analogWrite (ENB,0);
  digitalWrite (IN1, 0);
  digitalWrite (IN2, 0);
  digitalWrite (IN3, 0);
  digitalWrite (IN4, 0);
}
void left(){
  analogWrite (ENA, speed2);
  analogWrite (ENB, speed2);
  digitalWrite (IN1, 0);
  digitalWrite (IN2, 1);
  digitalWrite (IN3, 1);
  digitalWrite (IN4, 0);
}
void right(){
  analogWrite (ENA, speed2);
  analogWrite (ENB, speed2);
  digitalWrite (IN1, 1);
  digitalWrite (IN2, 0);
  digitalWrite (IN3, 0);
  digitalWrite (IN4, 1);
}
