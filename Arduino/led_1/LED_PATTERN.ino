int pins[]= {0,1,2,3,4,5,6};
byte index=0;
byte pattern[] = {0x01, 0x02,0x04,0x08,0x10,0x20,0x40};
void setup(){
  for(int i = 0;i<7;i++){
    pinMode(pins[i],OUTPUT);
  }
}
void loop(){
  for(int i = 0;i<7;i++){
    bool state = (pattern[index]>>i & 1);
    digitalWrite(pins[i],state);
    
  }
  delay(1000);
  index=(index+1)%7;

}