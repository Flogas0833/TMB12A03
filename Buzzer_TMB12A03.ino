const int Buzzer_Pin = 18; 

void setup() {
  pinMode(Buzzer_Pin, OUTPUT);
}

void loop() {
  digitalWrite(Buzzer_Pin, HIGH);
  delay(1000); 

  digitalWrite(Buzzer_Pin, LOW);
  delay(1000); 
}