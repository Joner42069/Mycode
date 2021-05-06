int g = 13;
int y = 11;
int r = 12;



void setup() {
  // put your setup code here, to run once:
  pinMode(g, OUTPUT); //green
  pinMode(r, OUTPUT); //red
  pinMode(y, OUTPUT); //yellow
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly: green13, red12, yellow11
  digitalWrite(g, HIGH);
  Serial.println("MAKE THE LIGHT!");
  delay(10000);
  digitalWrite(g, LOW);
  delay(1);
  digitalWrite(y, HIGH);
  Serial.println("DON'T MISS THE LIGHT!");
  delay(5000);
  digitalWrite(y, LOW);
  delay(1);
  digitalWrite(r, HIGH);
  Serial.println("STOP!");
  delay(15000);
  digitalWrite(r, LOW);
  
}
