int press_button = 0;
int pinbutton = 9;
bool pressed = true;
void setup(){
  Serial.begin(9600);
  pinMode(pinbutton,INPUT_PULLUP);
}
void loop(){
  bool state = digitalRead(pinbutton);
  if (state!=pressed){
    pressed= !pressed;
    if(!state){
      press_button = press_button + 1;
      Serial.println("버튼을"+ press_button+"만큼 눌렀습니다.")
    }
    

  }
  
}