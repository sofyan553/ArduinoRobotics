#include <Encoder.h>

Encoder myEnc(8,10);

int ENA = 9 ;
int IN1 = 8 ;
int IN2 = 4 ;

int ENB = 6 ;
int IN3 = 8 ;
int IN4 = 7 ;

long oldPosition  =-999;
void setup() {
   Serial.begin(9600);
   pinMode(IN1,OUTPUT);
   pinMode(IN2,OUTPUT);
   pinMode(IN3,OUTPUT);
   pinMode(IN4,OUTPUT);
}
void loop() {
  long newPosition = myEnc.read();
  if ((newPosition != oldPosition)) {
    if ((newPosition<1000)){
    forward();
    }
   if ((newPosition>1200)&&(newPosition<1650)){
   rotation();
    }
   if ((newPosition>1750)&&(newPosition<2750)){
   forward();
    }
   if ((newPosition>2850)&&(newPosition<3330)){
   rotation();
    }
    if ((newPosition>3420)&&(newPosition<4550)){
     forward();
   
    }
     if ((newPosition>4650)&&(newPosition<5100)){
     rotation();
    }
    
    if ((newPosition>5150)&&(newPosition<6150)){
     forward();
    }

   if ((newPosition>6200)){
    Stop();
    }
    oldPosition = newPosition; 
   Serial.println(newPosition);
  
}
}

void forward(){
  analogWrite(ENA,150);
  digitalWrite(IN1,1);
  digitalWrite(IN2,0);
  analogWrite(ENB,150);
  digitalWrite(IN3,0);
  digitalWrite(IN4,1);
}

void rotation(){
   analogWrite(ENA,150);
   digitalWrite(IN1,1);
   digitalWrite(IN2,0);
   analogWrite(ENB,150);
   digitalWrite(IN3,1);
   digitalWrite(IN4,0);
}
void Stop(){
   analogWrite(ENA,0);
   digitalWrite(IN1,0);
   digitalWrite(IN2,0);
   analogWrite(ENB,0);
   digitalWrite(IN3,0);
   digitalWrite(IN4,0);
}
