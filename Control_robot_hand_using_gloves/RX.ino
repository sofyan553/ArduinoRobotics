#include<Servo.h>

byte start;
int val1,val2,val3,val4,val5;

Servo thumb;
Servo index;
Servo middle;
Servo annular;
Servo pinky;

void setup(){
  Serial.begin(9600);  
  thumb.attach(11);
  index.attach(10);
  middle.attach(6);
  annular.attach(5);
  pinky.attach(3);
}

void loop(){
 if (Serial.available()){
  start=Serial.read();
  
  if (start=='>'){
   val1=Serial.read();
   val2=Serial.read();
   val3=Serial.read();
   val4=Serial.read();
   val5=Serial.read();
  }
  
 delay(30); 
  
 }
 thumb.write(val1);
 index.write(val2);
 middle.write(val3);
 annular.write(val4);
 pinky.write(val5);
  
}
