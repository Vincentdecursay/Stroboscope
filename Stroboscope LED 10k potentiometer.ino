int ledPin = 13; 
void setup() {
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
   int sensorValue = analogRead(A0)/10; //10K potentiometer analog pin 0
  
  digitalWrite(ledPin, HIGH);
  delay(sensorValue);
  Serial.println(sensorValue);
  digitalWrite(ledPin, LOW);
  delay(1);
}
