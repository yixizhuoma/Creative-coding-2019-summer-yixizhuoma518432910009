void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int n = digitalRead(4);
  if (n==HIGH)
  {
    delay(1000);
    digitalWrite(13, HIGH);
    delay(5000);
    digitalWrite(13, LOW);

  }


}
