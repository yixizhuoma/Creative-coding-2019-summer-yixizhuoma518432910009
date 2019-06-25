void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12,OUTPUT);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
}

void loop() {
  
 
  int n = digitalRead(4);
  if (n==HIGH){
    digitalWrite(12, HIGH); 
    digitalWrite(13,LOW);
  }
if (n==LOW){
    digitalWrite(12, LOW); 
    digitalWrite(13,HIGH);
  }


}
