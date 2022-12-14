void setup() {
  pinMode(10,OUTPUT);
  pinMode(3,OUTPUT);
  
  digitalWrite(3,HIGH);
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  digitalWrite(10,LOW);
    
}

void loop() {
  digitalWrite(3,HIGH);
  delay(200);
  digitalWrite(3,LOW);
  
  
  digitalWrite(10,HIGH);
  delay(200);
  digitalWrite(10,LOW);
}
