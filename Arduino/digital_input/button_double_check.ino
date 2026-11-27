int pressbutton=0;
bool pressed=false;
int button = 9;
void setup(){
  Serial.begin(9600);
  pinMode(button,INPUT_PULLUP);
}
bool double_check(bool a,bool b){
  if(a==b){
    delay(10);
    if(a==digitalRead(button)){
      return true;
    }
    else{
      return false;
    }
  }
  else{
    return false;
  }
  

}
void loop(){
  bool state = digitalRead(button);
  bool value = double_check(state,pressed);
  if (value){
    pressed=!pressed;
    if (!state){
      pressbutton=pressbutton+1;
      Serial.println("버튼을"+string(pressbutton)+"번 입력하셨습니다.");
    }
  }
}