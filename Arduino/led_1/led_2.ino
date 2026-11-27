int pins[] = {0,1,2,3,4,5,6,7};

void setup(){
  for (int i =0; i<8; i++){
    pinMode(pins[i],OUTPUT);
  }
}
void ledcontrol(boolean state){
  for (int i =0; i<8; i++){
    digitalWrite(pins[i],state);
  }
}
void loop(){
  ledcontrol(true);
  delay(1000);
  ledcontrol(false);
  delay(1000);
}