int x,y,z;
int x_pin=1;
int y_pin=2;
int z_pin=3;
void setup(){
Serial.begin(9600);  
}

void loop(){
  x=analogRead(x_pin);
  y=analogRead(y_pin);
  z=analogRead(z_pin);
  
  Serial.print("x= ");
  Serial.print(x);
  Serial.print("  || y= ");
  Serial.print(y);
  Serial.print("  ||z=  ");
  Serial.println(z);  
}
