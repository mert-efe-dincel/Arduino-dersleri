int led_1 = 2;
int led_2 = 3;
int led_3 = 4;

int pot = A0;
int deger;



void setup() {
  Serial.begin(9600);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(pot, INPUT);

}

void loop() {
  deger = analogRead(pot);

  if (deger <= 400) {
    digitalWrite(led_1, LOW);
    digitalWrite(led_2, LOW);
    digitalWrite(led_3, LOW);
  }  else if (deger <= 600) {
    digitalWrite(led_1, HIGH);
    digitalWrite(led_2, LOW);
    digitalWrite(led_3, LOW);
  }  
  else if (deger <= 800) {
    digitalWrite(led_1, HIGH);
    digitalWrite(led_2, HIGH);
    digitalWrite(led_3, LOW);
  }
  else if (deger <= 1000) {
    digitalWrite(led_1, HIGH);
    digitalWrite(led_2, HIGH);
    digitalWrite(led_3, HIGH);
  }
  Serial.println(deger);
}
