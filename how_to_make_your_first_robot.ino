int ENA=3;
int IN1=2;
int IN2=4;

int ENB=5;
int IN3=7;
int IN4=6;

void setup(){
  pinMode(ENA,OUTPUT);
  pinMode(IN1,OUTPUT); 
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENB,OUTPUT);
  
}
void loop(){
  
 analogWrite(ENA,255);
 analogWrite(ENB,255);
 digitalWrite(IN1,1);
 digitalWrite(IN2,0);
 digitalWrite(IN3,1);
 digitalWrite(IN4,0);
}
