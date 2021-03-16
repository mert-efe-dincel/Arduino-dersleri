int kirmizi_led_1=2;
int kirmizi_led_2=3;
int dugme=8;


void setup() {
pinMode(kirmizi_led_1,OUTPUT);
pinMode(kirmizi_led_2,OUTPUT);
pinMode(dugme,INPUT);
}

void loop() {
if(digitalRead(dugme)==HIGH)
{
  digitalWrite(kirmizi_led_1,HIGH);
  digitalWrite(kirmizi_led_2,HIGH);  
}
else
{
  digitalWrite(kirmizi_led_1,LOW);
  digitalWrite(kirmizi_led_2,LOW);    
}
delay(100);
}
