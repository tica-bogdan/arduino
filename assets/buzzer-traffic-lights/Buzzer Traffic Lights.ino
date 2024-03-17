void setup() {
	pinMode(3, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}
void loop() {
  digitalWrite(10, HIGH);
  delay(5000);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  for (int k = 0; k < 10; k++){
    for (int i = 0; i < 100; i++) {
		digitalWrite(buzzer, HIGH); 
		delay(1); 
		digitalWrite(buzzer, LOW); 
		delay(1);
	}
	delay(50);
	for (int j = 0; j < 70; j++) {
		digitalWrite(buzzer, HIGH);
		delay(2); 
		digitalWrite(buzzer, LOW);
		delay(2); 
	}	delay(500);

  }
  digitalWrite(8, LOW);
}