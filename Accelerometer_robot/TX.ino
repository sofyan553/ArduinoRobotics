int x_pin=1;
int y_pin=2;
int val1,val2;
void setup() {
Serial.begin(9600);
}

void loop() {

val1 = analogRead(x_pin);
val2 = analogRead(y_pin);

Serial.write("<");

Serial.write(val1);
Serial.write(val2);
delay(30);
}

