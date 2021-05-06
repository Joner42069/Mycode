//Pin 3 & 5 left
// Pin 6 & 11 Right

//Define Motor Pin Names
const int IN1 = 3; //forward left
const int IN2 = 5; //backward left
const int IN3 = 6; //forward right
const int IN4 = 11; //backward right

void setup() {
  //Initialize pins as outputs on Aurduno
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN3, OUTPUT);

}

void loop() {
  // Move Pe-pi bot foward for 2 seconds
  
  analogWrite(IN1, 150);
  analogWrite(IN2, 0);
  analogWrite(IN3, 170);
  analogWrite(IN4, 0); 
  delay(1500);
  
  analogWrite(IN1, 0);
  analogWrite(IN2, 0);
  analogWrite(IN3, 0);
  analogWrite(IN4, 0); 
  delay(500);
  
  analogWrite(IN1, 0);
  analogWrite(IN2, 150);
  analogWrite(IN3, 0);
  analogWrite(IN4, 170);
  delay(750);
  
  analogWrite(IN1, 0);
  analogWrite(IN2, 0);
  analogWrite(IN3, 0);
  analogWrite(IN4, 0);
  delay(1000000000);
  


 

}
