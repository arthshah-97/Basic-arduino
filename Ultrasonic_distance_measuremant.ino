int trig = 8;
int echo = 9;

void setup() {
  // put your setup code here, to run once:
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(2);//only delay is milisecond
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);

float t= pulseIn(echo,HIGH);
t=t/2;
float d=t*0.034;   // speed of sound= 340 m/s = 0.034 cm/microsec
Serial.println(d);
if(d<35 && d>25)
{
  digitalWrite(13,HIGH);
  delay(800);
  digitalWrite(13,LOW);
}
else if (d<25 && d>20)
{
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
}
else if (d<20)
{
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
}
delay(100);
}
