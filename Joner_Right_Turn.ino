//Motor Pins
const int IN1 = 3; //forward left
const int IN2 = 5; //backward left
const int IN3 = 6; //forward right
const int IN4 = 11; //backward right
//3 and 5 = left
//6 and 11 = right
void setup() {
  // Pins as outputs 
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

}

void loop() {
  // 1. move forward
  analogWrite(IN1, 150);
  analogWrite(IN2, 0);
  analogWrite(IN3, 170);
  analogWrite(IN4, 0);
  delay(1500);

  //2. one turn.  
  analogWrite(IN1, 0);
  analogWrite(IN2, 150);
  analogWrite(IN3, 170);
  analogWrite(IN4, 0);
  delay(50);

  //3. stop.
  analogWrite(IN1, 0);
  analogWrite(IN2, 0);
  analogWrite(IN3, 0);
  analogWrite(IN4, 0);
  delay(100000);

}
