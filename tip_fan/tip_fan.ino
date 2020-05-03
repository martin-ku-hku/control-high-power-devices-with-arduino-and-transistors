const int BASE = 3;

void setup(){
  pinMode(BASE, OUTPUT);
}

void loop(){
  analogWrite(BASE,128);
  delay(2000);
  analogWrite(BASE,0);
  delay(2000);
  analogWrite(BASE, 255);
  delay(2000);
  analogWrite(BASE, 0);
  delay(2000);
}
