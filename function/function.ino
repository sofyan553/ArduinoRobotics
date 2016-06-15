void setup(){
  pinMode(13,OUTPUT);
  
  
}

void loop(){
  
 ledBlink(2000); 
  
  
}
void ledBlink(int time){
 digitalWrite(13,1);
 delay(time);
 digitalWrite(13,0);
 delay(time);
 
}
