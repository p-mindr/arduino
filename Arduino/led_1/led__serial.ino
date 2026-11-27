int pins[]={0,1,2,3,4,5,6,7};
void setup(){
  for(int i=0; i<8; i++){
    pinMode(pins[i],OUTPUT);
  }
}
void loop(){
  for (int i=0; i<8; i++){
    digitalWrite(pins[i],HIGH);
    digitalWrite(pins[i-1],LOW);
    delay(1000);
  }
}