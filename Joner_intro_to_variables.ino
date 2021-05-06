int x = 0;
int r = 12;

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop() {
  Serial.println(x);
  x = x+1;
  delay(1000);
  digitalWrite(r, HIGH);
  Serial.println(x);
  x= x+1;
  delay(1000);
  digitalWrite(r, LOW);

  
  
}
