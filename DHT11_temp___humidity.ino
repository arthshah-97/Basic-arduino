#include <SimpleDHT.h>
SimpleDHT11 dht;
void setup() {
  
Serial.begin(38400);

}

void loop() {
  byte temperature ;
  byte humidity ;
  while(Serial.available()){
    
dht.read(A3,&temperature,&humidity,NULL);
Serial.print(temperature);
Serial.print(",");
Serial.println(humidity);
delay(100);
  }
}
