char m[]="Hello World";
char ON[]="The led is on";
char OFF[]="The led is off";
void setup(){
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  Serial.println(m);
  Serial.println();
}

void loop(){
 digitalWrite(13,1);
 Serial.println(ON);
 delay(1000);
  digitalWrite(13,0);
  Serial.println(OFF);
 delay(1000);
 Serial.println();
 }
