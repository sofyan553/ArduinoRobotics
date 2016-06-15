int ENA=3;
int IN1=2;
int IN2=4;

int ENB=6;
int IN3=5;
int IN4=7;

byte start;
int x,y,y1,x1;

void setup() {

  Serial.begin(9600);
  pinMode(ENA,OUTPUT);
  pinMode(IN1,OUTPUT); 
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENB,OUTPUT);
}

void loop() {
if (Serial.available()) {
   start=Serial.read();

if (start=='>'){
   x = Serial.read();
   y=Serial.read();
}
  if ((y !=255) && (x!=255 )&& (y>120)&& (x<80) ){
      y1=map(y,80,5,0,255);
   analogWrite(ENA,y1);// Rotation right and forward
   analogWrite(ENB,250);
   digitalWrite(IN1,0);
   digitalWrite(IN2,1);
   digitalWrite(IN3,0);
   digitalWrite(IN4,1);
 }
 
 if ((y !=255) && (x!=255 )&& (y>120)&& (x>120) ){
     y1=map(y,120,200,0,255);
     analogWrite(ENA,y1);// Rotation right and backward
     analogWrite(ENB,250);
     digitalWrite(IN1,1);
     digitalWrite(IN2,0);
     digitalWrite(IN3,0);
     digitalWrite(IN4,1);
   }

    if ((y !=255) && (x!=255)&& (y<80) && (x>120) ){
       y1=map(y,120,200,0,255);
       analogWrite(ENA,y1);// Rotation left and backward
       analogWrite(ENB,250);
       digitalWrite(IN1,1);
       digitalWrite(IN2,0);
       digitalWrite(IN3,1);
       digitalWrite(IN4,0);
     }

    if ((y !=255) && (x!=255)&& (y<80) &&(x<80) ){
       y1=map(y,80,5,0,255);
       analogWrite(ENA,y1);// Rotation left and forward
       analogWrite(ENB,250);
       digitalWrite(IN1,0);
       digitalWrite(IN2,1);
       digitalWrite(IN3,1);
       digitalWrite(IN4,0);
     }



    if ((y !=255) && (x!=255 )&& (x>80)&& (x<120) && (y>80)&& (y<120)){
        analogWrite(ENA,0);
        analogWrite(ENB,0);
    }

    if ((y !=255) && (x!=255 )&& (x<80) && (y>80)&& (y<120) ){
        x1= map(x,80,5,0,255);
        analogWrite(ENA,x1);// forward
        analogWrite(ENB,x1);
        digitalWrite(IN1,0);
        digitalWrite(IN2,1);
        digitalWrite(IN3,0);
        digitalWrite(IN4,0);
    }

   if ((y !=255) && (x!=255 )&& (x>120) && (y>80)&& (y<120) ){
      x1= map(x,120,200,0,255);
      analogWrite(ENA,x1);// backward
      analogWrite(ENB,x1);
      digitalWrite(IN1,1);
      digitalWrite(IN2,0);
      digitalWrite(IN3,0);
      digitalWrite(IN4,1);
    }

    }
    delay(30);
    }


