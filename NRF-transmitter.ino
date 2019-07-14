#include<SPI.h>
#include<RF24.h>

int msg[1];
RF24 radio(8,7);
const uint64_t pipe = 0xE8E8F0F0E1LL;
int potpin = 0;
int val;

void setup() {
  // put your setup code here, to run once:
radio.begin();
radio.openWritingPipe(pipe);
}

void loop() {
  // put your main code here, to run repeatedly:
val = 1;
val = map(val,0,1023,0,179);
msg[0]=val;
radio.write(msg,1);
}
