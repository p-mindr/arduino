bool pressed = LOW;
int pin_button =9;
int press_count = 0;
void setup(){
  Serial.begin(9600);
  pinMode(pin_button,INPUT_PULLUP);
  Serialprintln("버튼을"+ press_count + "번 눌렀습니다.");
}
void loop(){
  bool state = digitalRead(pin_button);
  if (state==pressed){
    press_count = press_count+1;
    Serialprintln("버튼을"+ press_count + "번 눌렀습니다.");
  }
}