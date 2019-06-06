int sensepin = A4;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensepin,INPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
int val =analogRead(sensepin);
Serial.println(val);
delay(100);
}
