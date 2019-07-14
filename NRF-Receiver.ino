#include<SPI.h>
#include"RF24.h"

RF24 radio(8,7);
const uint64_t pipe=0xE8E8F0F0E1LL;
int msg[1];


void setup() {
  // put your setup code here, to run once:
radio.begin();
radio.openReadingPipe(1,pipe);
radio.startListening();
pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if( radio.available())
{
  bool done = false;
  while(!done)
  {
    
    digitalWrite(4,HIGH);
    delay(1000);
    digitalWrite(4,LOW);
  }
}
}
