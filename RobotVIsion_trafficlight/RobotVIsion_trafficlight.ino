void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {
  digitalWrite(10, LOW); // RED
  digitalWrite(11, HIGH); // RED
  digitalWrite(12, HIGH); // RED
  delay(15000);

  digitalWrite(10, HIGH); // RED
  digitalWrite(11, LOW); // Yellow
  digitalWrite(12, HIGH); // RED
  delay(1000);

  digitalWrite(10, HIGH); // RED
  digitalWrite(11, HIGH); // Yellow
  digitalWrite(12, LOW); // RED
  delay(1000);

  digitalWrite(10, LOW); // RED
  digitalWrite(11, LOW); // Yellow
  digitalWrite(12, LOW); // RED
  delay(1000);

  digitalWrite(10, HIGH); // RED
  digitalWrite(11, HIGH); // Yellow
  digitalWrite(12, HIGH); // RED
  delay(1000);
  
}
