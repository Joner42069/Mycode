const int IN1 = 3; //forward left
const int IN2 = 5; //backward left
const int IN3 = 6; // forward right
const int IN4 = 11; //backward right



void setup() {
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  rightturn();
  delay(5000);
  Stop();
  delay(1000);
  leftturn();
  delay(5000);
  


  
}
void myFwd()
{
  //moves Forward
  analogWrite(IN1,150);
  analogWrite(IN2,0);
  analogWrite(IN3,170);
  analogWrite(IN4,0);  
}

void Stop()
{
  analogWrite(IN1,0);
  analogWrite(IN2,0);
  analogWrite(IN3,0);
  analogWrite(IN4,0); 
}

void myBkw()
{
  //move backwards
  analogWrite(IN1,0);
  analogWrite(IN2,150);
  analogWrite(IN3,0);
  analogWrite(IN4,170);
}

void leftturn()
{
  //makes right turn
  analogWrite(IN1,0);
  analogWrite(IN2,140);
  analogWrite(IN3,160);
  analogWrite(IN4,0);
}

void rightturn()
{
  //makes left turn
  analogWrite(IN1,140);
  analogWrite(IN2,0);
  analogWrite(IN3,0);
  analogWrite(IN4,160);
}

