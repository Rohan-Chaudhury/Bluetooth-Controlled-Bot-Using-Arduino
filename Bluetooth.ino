#define lmp 8
#define lmn 9
#define rmp 10
#define rmn 11
int data;
void setup()
{
  // put your setup code here, to run once:
Serial.begin(9600);
  pinMode(lmp,OUTPUT);
  pinMode(lmn,OUTPUT);
  pinMode(rmp,OUTPUT);
  pinMode(rmn,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly
   if(Serial.available())
  {
    int data = Serial.read();
    data=data-48;
    Serial.println(data);
  
  switch(data)
  {
    case 1:forward();
    break;
    case 2:backward();
    break;
    case 3:left();
    break;
    case 4:right();
    break;
    case 5: stops();
    break;
   
    
  }
  }
  

}
 void backward()
  {
  digitalWrite(lmp,LOW);
  digitalWrite(lmn,HIGH);
  digitalWrite(rmn,LOW);
  digitalWrite(rmp,HIGH);
  }    
  void stops()
  {
  digitalWrite(lmp,LOW);
  digitalWrite(lmn,LOW);
  digitalWrite(rmn,LOW);
  digitalWrite(rmp,LOW);
  }
void forward()
{
  digitalWrite(lmp,HIGH);
  digitalWrite(lmn,LOW);
  digitalWrite(rmn,HIGH);
  digitalWrite(rmp,LOW);
}

void right()
{
   digitalWrite(lmp,HIGH);
  digitalWrite(lmn,LOW);
   digitalWrite(rmn,LOW);
  digitalWrite(rmp,HIGH);
  
}

void left()
{
   digitalWrite(lmp,LOW);
  digitalWrite(lmn,HIGH);
  digitalWrite(rmn,HIGH);
  digitalWrite(rmp,LOW);
}



