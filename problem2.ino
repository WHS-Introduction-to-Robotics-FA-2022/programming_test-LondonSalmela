int redPin= 11;
int greenPin= 10;
int bluePin= 9;

void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  analogWrite(redPin, 128);
  analogWrite(bluePin, 16);
  analogWrite(greenPin,2);
    
}

