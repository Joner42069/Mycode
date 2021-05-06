int x = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  

}

void loop() {
  if (x == 1)
  {
    Serial.println("Yes, x is 1");
  }
  else
  {
    Serial.println("no, x is not 1");
  }


}
