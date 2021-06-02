int rightpin1 = 6;
int rightpin2 = 7;
int leftpin1 = 8;
int leftpin2 = 9;
char value;

void setup()
{
  // Digital pin 6, 7, 8 and 9 set as output pin
  
  pinMode(rightpin1, OUTPUT);  
  pinMode(rightpin2, OUTPUT);
  pinMode(leftpin1, OUTPUT); 
  pinMode(leftpin2, OUTPUT); 
  Serial.begin(9600);
}

void loop() 
{
  while (Serial.available() > 0)
  {
    value = Serial.read();
    Serial.println(value);
  }


  if ( value == 'F') // Forward
  {
    digitalWrite(rightpin1, LOW);
    digitalWrite(rightpin2, HIGH);
    digitalWrite(leftpin1, HIGH);
    digitalWrite(leftpin2, LOW);
  }
  else if (value == 'B') // to move in reverse
  {
    digitalWrite(rightpin1, HIGH);
    digitalWrite(rightpin2, LOW);
    digitalWrite(leftpin1, LOW);
    digitalWrite(leftpin2, HIGH);
  }

  else if (value == 'L') //to move towards left
  {
    digitalWrite(rightpin1, LOW);
    digitalWrite(rightpin2, LOW);
    digitalWrite(leftpin1, HIGH);
    digitalWrite(leftpin2, LOW);
  }
  else if (value == 'R') ////to move towards right
  {
    digitalWrite(rightpin1, LOW);
    digitalWrite(rightpin2, HIGH);
    digitalWrite(leftpin1, LOW);
    digitalWrite(leftpin2, LOW);
  }

  else if (value == 'S') // to halt all movement
  {
    digitalWrite(rightpin1, LOW);
    digitalWrite(rightpin2, LOW);
    digitalWrite(leftpin1, LOW);
    digitalWrite(leftpin2, LOW);
  }
  else if (value == 'I') // to move forward towards the right
  {
    digitalWrite(rightpin1, HIGH);
    digitalWrite(rightpin2, LOW);
    digitalWrite(leftpin1, LOW);
    digitalWrite(leftpin2, LOW);
  }
  else if (value == 'J') // to move backward towards the left
  {
    digitalWrite(rightpin1, LOW);
    digitalWrite(rightpin2, HIGH);
    digitalWrite(leftpin1, LOW);
    digitalWrite(leftpin2, LOW);
  }
  else if (value == 'G') // to move backward towards the left
  {
    digitalWrite(rightpin1, LOW);
    digitalWrite(rightpin2, LOW);
    digitalWrite(leftpin1, HIGH);
    digitalWrite(leftpin2, LOW);
  }
  else if (value == 'H') // to move backward towards the right
  {
    digitalWrite(rightpin1, LOW);
    digitalWrite(rightpin2, LOW);
    digitalWrite(leftpin1, LOW);
    digitalWrite(leftpin2, HIGH);
  }
}
