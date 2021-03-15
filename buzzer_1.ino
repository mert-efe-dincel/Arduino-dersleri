int buzzer=2;

void setup() {
pinMode(buzzzer,OUTPUT);

}

void loop() {
digitalWrite(buzzer,HIGH);
delay(1000);
digitalWrite(buzzer,LOW);
delay(1000);
}
