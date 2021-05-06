const int Left = 7;
const int Center = 8;
const int Right = 10;
 int In1 = 3;
 int In2 = 5;
 int In3 = 6;
 int In4 = 11;
 
void setup() {
  pinMode(Left, INPUT);
  pinMode(Center, INPUT);
  pinMode(Right, INPUT);
  Serial.begin(9600);
}

void loop() {
  int LeftR;
  int CenterR;
  int RightR;

  LeftR = digitalRead(Left);
  CenterR = digitalRead(Center);
  RightR = digitalRead(Right);

  Serial.print(LeftR);
  Serial.print(", ");

  Serial.print(CenterR);
  Serial.print(", ");
  
  Serial.print(RightR);
  Serial.println(", ");
  delay(10);

  if(LeftR == 1 || Center==1 || RightR ==1)
  {
    //moves backward
    analogWrite(In1, 0);
    analogWrite(In2, 150);
    analogWrite(In3, 0);
    analogWrite(In4, 150);
  }
}
