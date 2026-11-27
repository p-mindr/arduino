int pin_led=3;
void setup(){
  pinMode(pin_led,OUTPUT);
}
void mypwm(int a, int b){
  for (int i=0;i<255;i++){
    if (i>b){
      digitalWrite(a,LOW);
    }
    else{
      digitalWrite(a,HIGH);
    }
    delayMicroseconds(20);
  }
}
void loop(){
  for(int i=0;i<255;i++){
    mypwm(pin_led,i);
  }
  for (int i=255; i>0;i--){
    mypwm(pin_led,i);
  }
  
}

