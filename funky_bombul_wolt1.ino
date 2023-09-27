 int ENA = 3;
 int IN1 = 5;
 int IN2 = 6;
 int IN3 = 9;
 int IN4 = 10;
 int ENB = 11;
 int on = HIGH;
 int off = LOW;

char read;
void setup()
{
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0)
  {
    read = Serial.read();
    switch (read)
    {
      case 'f':
    digitalWrite(IN1, on);
    digitalWrite(IN2, off);
    digitalWrite(ENA, 120);
    digitalWrite(IN3, on);
    digitalWrite(IN4, off);
    digitalWrite(ENB, 120);
      break;
      
      case 'b':
    digitalWrite(IN1, off);
    digitalWrite(IN2, on);
    digitalWrite(ENA, 120);
    digitalWrite(IN3, off);
    digitalWrite(IN4, on);
    digitalWrite(ENB, 120);
      break;
      
      case 'r':
    digitalWrite(IN1, off);
    digitalWrite(IN2, on);
    digitalWrite(ENA, 120);
    digitalWrite(IN3, on);
    digitalWrite(IN4, off);
    digitalWrite(ENB, 120);
      break;
      
      case 'l':
    digitalWrite(IN1, on);
    digitalWrite(IN2, off);
    digitalWrite(ENA, 120);
    digitalWrite(IN3, off);
    digitalWrite(IN4, on);
    digitalWrite(ENB, 120);
      break;
        case 's':
    digitalWrite(IN1, off);
    digitalWrite(IN2, off);
    digitalWrite(ENA, 120);
    digitalWrite(IN3, off);
    digitalWrite(IN4, off);
    digitalWrite(ENB, 120);
      break;
    }
  }
  
}