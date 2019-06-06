String speed;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
Serial.begin(38400);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available())
{
  delay(500);
  char d=Serial.read();
  speed=speed+d;
 
  if(d=='#')
  { break;
  }  
}
if(speed.length()>0)
{
  if (speed=="*start#")
  {
    analogWrite(3,100);
    digitalWrite(4,LOW);
  }
  else if (speed=="*increase#")
  {
    analogWrite(3,250);
    digitalWrite(4,LOW);
  }
  else if (speed=="*maximum#")
  {
    analogWrite(3,255);
    digitalWrite(4,LOW);
  }
  else if (speed=="*stop#")
  {
    analogWrite(3,0);
    digitalWrite(4,LOW);
  }

}
}
