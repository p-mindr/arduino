int pin_button = {4,5};
int pin_led = {2,3};
int N = 2
void setup(){
  for(int i=0; i<N; i++){
    pinMode(pin_led[i],OUTPUT);
    pinMode(pin_button[i],INPUT);
  }
} 
void loop(){
  for (int i=0; i<N; i++){
    bool state=digitalRead(pin__button[i]);
    digitalWrite(pin_led,state);
  }
}