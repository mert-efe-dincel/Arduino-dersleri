int mavi_1=2;
int mavi_2=3;

void setup() {
pinMode(mavi_1,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
digitalWrite(mavi_1,HIGH);
digitalWrite(mavi_2,HIGH);
delay(2000);
digitalWrite(mavi_1,LOW);
digitalWrite(mavi_2,LOW);
delay(2000);


}
