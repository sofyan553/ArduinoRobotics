int ENA=2;
int IN1=3;
int IN2=4;

int ENB=5;
int IN3=6;
int IN4=7;

int senl=A5;
int senr=A1;
int senm=A3;

int lsen=0;
int rsen=0;
int msen=0;

void setup ()
{

  pinMode(ENA,OUTPUT);
  pinMode(IN1,OUTPUT); 
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENB,OUTPUT);
  
} 
void loop(){
  
sensor();

 
    if (lsen>rsen & lsen>msen){
       left(); }
    if (rsen>msen & rsen>lsen){
       right(); }
    if (msen>rsen & msen>lsen & msen<1003){
       forward(); }
    if (msen>1003){ 
       Stop(); }
    if (lsen<300 &msen<300 & rsen<300){ 
       right(); } 
  
}
void sensor(){
  lsen=analogRead(senl);
  msen=analogRead(senm);
  rsen=analogRead(senr);
  
}


void forward(){
 digitalWrite(ENA,1);
 digitalWrite(ENB,1);
 digitalWrite(IN1,1);
 digitalWrite(IN2,0);
 digitalWrite(IN3,1);
 digitalWrite(IN4,0);
}
void backward(){
  
 digitalWrite(ENA,1);
 digitalWrite(ENB,1);
 digitalWrite(IN1,0);
 digitalWrite(IN2,1);
 digitalWrite(IN3,0);
 digitalWrite(IN4,1);
}
void Stop(){
 digitalWrite(ENA,0);
 digitalWrite(ENB,0);
 digitalWrite(IN1,0);
 digitalWrite(IN2,0);
 digitalWrite(IN3,0);
 digitalWrite(IN4,0);
}
void left(){
 digitalWrite(ENA,1);
 digitalWrite(ENB,1);
 digitalWrite(IN1,1);
 digitalWrite(IN2,0);
 digitalWrite(IN3,0);
 digitalWrite(IN4,1);
}
void right(){
 digitalWrite(ENA,1);
 digitalWrite(ENB,1);
 digitalWrite(IN1,0);
 digitalWrite(IN2,1);
 digitalWrite(IN3,1);
 digitalWrite(IN4,0);
}
