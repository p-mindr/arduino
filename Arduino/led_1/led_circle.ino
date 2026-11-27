int pin[] ={0,1,2,3,4,5,6,7};
byte pattern = 0x01;
void setup(){
  for(int i = 0; i<8;i++){
    pinMode(pin[i],OUTPUT);
  }
}
byte circular_shift_left(byte p, byte n){
  return(p<<n) | (p>>(8-n));
}
void loop(){
  for(int i=0; i<8; i++){
    bool state =(pattern>>i&1);
    digitalWrite(pin[i],state);
  }
  pattern= circular_shift_left(pattern,1);
  delay(500);
}