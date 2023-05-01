bool IR_read;

void setup() {
  pinMode(53, INPUT);
  Serial.begin(9600);
}

void loop() {
  IR_read = digitalRead(53);
  Serial.println(IR_read);
  delay(100); 
}
