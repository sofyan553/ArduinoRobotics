int val1,val2,val3,val4,val5;

void setup() {

Serial.begin(9600);
}

void loop() {

val1 = analogRead(0);
val2 = analogRead(1);
val3=  analogRead(2);
val4=  analogRead(3);
val5=  analogRead(4);

val1=map(val1,700,960,0,180);
val2=map(val2,700,960,0,180);
val3=map(val3,700,960,0,180);
val4=map(val4,700,960,0,180);
val5=map(val5,700,960,0,180);

Serial.write(">");

Serial.write(val1);
Serial.write(val2);
Serial.write(val3);
Serial.write(val4);
Serial.write(val5);
delay(30);
}
