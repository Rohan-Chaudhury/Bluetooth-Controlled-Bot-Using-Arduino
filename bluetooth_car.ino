char data = 0;
const int motorA1  = 8;  // Pin  2 of L293
const int motorA2  = 9;  // Pin  7 of L293
const int motorB1  = 10; // Pin 10 of L293
const int motorB2  = 11;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motorA1,OUTPUT);
  pinMode(motorA2,OUTPUT);
  pinMode(motorB1,OUTPUT);
  pinMode(motorB2,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    data = Serial.read();
    Serial.print(data);
    Serial.print("\n");
    if(data == 'F')
    {
        digitalWrite(motorA1,HIGH);
        digitalWrite(motorA2,LOW);
        digitalWrite(motorB1,HIGH);
        digitalWrite(motorB2,LOW);
    }
    if(data == 'B')
    {
        digitalWrite(motorA1,LOW);
        digitalWrite(motorA2,HIGH);
        digitalWrite(motorB1,LOW);
        digitalWrite(motorB2,HIGH);
    }
    if(data == 'S')
    {
        digitalWrite(motorA1,LOW);
        digitalWrite(motorA2,LOW);
        digitalWrite(motorB1,LOW);
        digitalWrite(motorB2,LOW);
    }
    if(data == 'R')
    {
        digitalWrite(motorA1,HIGH);
        digitalWrite(motorA2,LOW);
        digitalWrite(motorB1,LOW);
        digitalWrite(motorB2,HIGH);
    }
    if(data == 'L')
    {
        digitalWrite(motorA1,LOW);
        digitalWrite(motorA2,HIGH);
        digitalWrite(motorB1,HIGH);
        digitalWrite(motorB2,LOW);
    }
    
  }
}
