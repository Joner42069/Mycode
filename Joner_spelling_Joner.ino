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
 int speed1;
 int speed2;

 speed1 = 150;
 speed2 = 170;
  
 For(250, speed2, 500);


 swingrightturn();
 delay(700);

 For();
 delay(1000);

 rightturn();
 delay(350);

 For();
 delay(500);

 Bac();
 delay(1000);

 Stop();
 delay(1000000);




  
}
void For(int speed1, int speed2, int thetime)
{
  //moves Forward
  analogWrite(IN1, speed1);
  analogWrite(IN2,0);
  analogWrite(IN3, speed2);
  analogWrite(IN4,0);
  delay(thetime);  
}

void Stop()
{
  analogWrite(IN1,0);
  analogWrite(IN2,0);
  analogWrite(IN3,0);
  analogWrite(IN4,0); 
}

void Bac()
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
  analogWrite(IN2,100);
  analogWrite(IN3,120);
  analogWrite(IN4,0);
}

void rightturn()
{
  //makes left turn
  analogWrite(IN1,100);
  analogWrite(IN2,0);
  analogWrite(IN3,0);
  analogWrite(IN4,120);
}

void swingrightturn()
{
  //makes swing right turn
  analogWrite(IN1,0);
  analogWrite(IN2,0);
  analogWrite(IN3,100);
  analogWrite(IN4,0);
}

