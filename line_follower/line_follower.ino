int ENA=3;
int IN1=4;
int IN2=5;

int ENB=9;
int IN3=6;
int IN4=7;

int Lsens_pin=11;
int Rsens_pin=10;


int Lsens=0;
int Rsens=0;


void setup ()
{
Serial.begin(9600);
pinMode(Lsens_pin,INPUT);
pinMode(Rsens_pin,INPUT);
  pinMode(ENA,OUTPUT);
  pinMode(IN1,OUTPUT); 
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENB,OUTPUT);
  
} 
void loop(){
  Serial.println(Rsens);
sensor();

 if ((Lsens==0)&&(Rsens==0)){
   forward();
 }
 
 if ((Lsens==1)&&(Rsens==0)){
   left();
 }
 
 if ((Lsens==0)&&(Rsens==1)){
   right();
 }
  
}
void sensor(){
  Lsens=digitalRead(Lsens_pin);
  Rsens=digitalRead(Rsens_pin); 
}
void forward(){
 analogWrite(ENA,255);
 analogWrite(ENB,255);
 digitalWrite(IN1,1);
 digitalWrite(IN2,0);
 digitalWrite(IN3,1);
 digitalWrite(IN4,0);
}
void left(){
  analogWrite(ENA,255);
 analogWrite(ENB,255);
 digitalWrite(IN1,1);
 digitalWrite(IN2,0);
 digitalWrite(IN3,0);
 digitalWrite(IN4,1);
}
void right(){
  analogWrite(ENA,255);
 analogWrite(ENB,255);
 digitalWrite(IN1,0);
 digitalWrite(IN2,1);
 digitalWrite(IN3,1);
 digitalWrite(IN4,0);
}
