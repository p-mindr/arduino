//3번쨰 led켜기 상태변수 사용하기 !
int pins[] = {0,1,2,3,4,5,6,7};
boolean state = false;
void setup(){
  for (int i = 0; i <8; i++){
    pinMode(pins[i],OUTPUT);
  }
}
void loop(){
  state=!state;
  for (int i =0; i<8; i++){
    digitalWrite(pins[i],state);
  }
  delay(1000);
}