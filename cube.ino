void setup() {
int i;
for(i=2;i<=13;i++)
{
  pinMode(i,OUTPUT);
}
}
int i,j;
void series()
{
  for(i=11;i<=13;i++)
  {
    digitalWrite(i,LOW);
    digitalWrite(i+1,HIGH);
    digitalWrite(i+2,HIGH);
    for(j=2;j<=10;j++)
    {
      digitalWrite(j,HIGH);
      
    }
    delay(1000);
  }
}

void alllow()
{
   for(i=2;i<=13;i++)
 {
  digitalWrite(i,LOW);
 }

}

void parallel()
{
  for(i=2;i<=10;i++)
  {
    digitalWrite(i,HIGH); 

       if(i==4||i==7)
       {
        delay(1000);
       }
  }
}

void loop() {
 series();
 delay(2000);

 alllow();

 parallel();
 delay(2000);

 alllow();
 
}
