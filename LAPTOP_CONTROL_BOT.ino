int motor1_In1=9;
int motor2_In2=10;
int motor3_In3=11;
int motor4_In4=12;

void setup()
{
  pinMode(motor1_In1,OUTPUT);
  pinMode(motor2_In2,OUTPUT);
  pinMode(motor3_In3,OUTPUT);
  pinMode(motor4_In4,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  char cmd=Serial.read();
  if(cmd=='W')
  {
    digitalWrite(motor1_In1,HIGH);
    digitalWrite(motor2_In2,LOW);
    digitalWrite(motor3_In3,LOW);
    digitalWrite(motor4_In4,HIGH);

  }
  else if(cmd=='A')
  {
    digitalWrite(motor1_In1,LOW);
    digitalWrite(motor2_In2,HIGH);
    digitalWrite(motor3_In3,LOW);
    digitalWrite(motor4_In4,HIGH);
  }
  else if(cmd=='D')
  {
    digitalWrite(motor1_In1,HIGH);
    digitalWrite(motor2_In2,LOW);
    digitalWrite(motor3_In3,HIGH);
    digitalWrite(motor4_In4,LOW);
  }

  else if(cmd=='S')
  {
    digitalWrite(motor1_In1,LOW);
    digitalWrite(motor2_In2,HIGH);
    digitalWrite(motor3_In3,HIGH);
    digitalWrite(motor4_In4,LOW);
  }
  else if(cmd=='X')
  {
    digitalWrite(motor1_In1,LOW);
    digitalWrite(motor2_In2,LOW);
    digitalWrite(motor3_In3,LOW);
    digitalWrite(motor4_In4,LOW);
  }
}



  
