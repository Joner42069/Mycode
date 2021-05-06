const int IN1 = 3; //forward left
const int IN2 = 5; //backward left
const int IN3 = 6; // forward right
const int IN4 = 11; //backward right

//green = 12, red = 13

const int trigPin = 2;
const int echoPin = 4;
int green = 12;
int red = 13;
long duration, distance, inches, cm;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {

  ping();

  duration = cm;

  if (inches < 15)
  {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    STOP();
    delay(1000);
    BAC();
    delay(500);
    rightturn();
    delay(200);
  }
  else 
  {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    FORW();
    delay(1000);
  } 
}

void FORW()
{
  //moves forward
  analogWrite(IN1,90);
  analogWrite(IN2,0);
  analogWrite(IN3,100);
  analogWrite(IN4,0);  

}

void BAC()
{
  //move backwards
  analogWrite(IN1,0);
  analogWrite(IN2,150);
  analogWrite(IN3,0);
  analogWrite(IN4,170);
}
void STOP()
{
  analogWrite(IN1,0);
  analogWrite(IN2,0);
  analogWrite(IN3,0);
  analogWrite(IN4,0); 
}
void rightturn()
{
   //makes right turn
  analogWrite(IN1,100);
  analogWrite(IN2,0);
  analogWrite(IN3,0);
  analogWrite(IN4,120);
}


void ping()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  inches = duration / 74 / 2;
  cm = duration / 29 / 2;

  return; 
}

