#include <Servo.h> 
int val ;
Servo brushless ;


void setup() {
  Serial.begin(9600);
    brushless.attach(9);
}

void loop(){
  int val = analogRead(0);
  val = map(val, 0, 1023, 25, 180);
  Serial.println (val);
  brushless.write(val);
  delay(5);   
  }
