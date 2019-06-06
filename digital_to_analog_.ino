int led = 11;// pin 3,5,6,9,10,11 can only be used as it has timers
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int i;
for(i=0;i<256;i++)
{
  analogWrite(led,i);
  delay(10); //it will take 2550 ms 
  
}
for(i=255;i>=0;i--)
{
  analogWrite(led,i);
  delay(10);
  }
}
