int pins[] = {0,1,2,3,4,5,6,7};
byte pattern=0;

void setup(){
  for(int i=0; i<8; i++){
    pinMode(pins[i],OUTPUT);
  }
  randomSeed(analogRead(A0));
}
void loop(){
  pattern=random(256);
  for(int i=0;i<8;i++){
    bool state = (pattern>>i)&1;
    digitalWrite(pins[i],state);
  }
  delay(400);
}