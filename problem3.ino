int x;

void setup() {
  Serial.begin(9600);
  pinMode(A2,INPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  
  
}

void loop() {
  x=analogRead(A2);
  Serial.println(x);
  if (x >= 512){
  digitalWrite(LED_BUILTIN,HIGH);
  }else{
  digitalWrite(LED_BUILTIN,LOW);
  }
}
