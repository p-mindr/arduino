int pin_button =9;
void setup(){
  Serial.begin(9600);
  pinMode(pin_button,INPUT_PULLUP);

}
void loop(){
  bool state= digitalRead(pin button);
  Serial.print('\''+state+'\'');
  if (state){
    Serial.println("버튼을 누르지 않았습니다.");
  }
  else{
    Serial.print("버튼을 눌렀습니다.");

  }
  delay(1000);
}