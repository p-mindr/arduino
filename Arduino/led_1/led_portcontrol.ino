int pins[] ={2,3,4,5,6,7,8,9};
char TERMINATOR ='\n';
String buffer = "";
bool process_it =false;
void setup(){
  Serial.begin(9600);
  for(int i=0;i<8;i++){
    pinMode(pins[i],OUTPUT);
  }
}
void loop(){
  while (Serial.available()>0){
    char ch =Serial.read();
    if (ch ==TERMINATOR){
      process_it =true;
    }
    else{
      buffer=buffer+ch;
    }

  }
  if (process_it==true){
    Serial.print("\'" + buffer + "\':");
    int no =buffer.toInt();
    if (no < 1 || no > 8){
      Serial.println("잘못된 LED번호를 입력했습니다.");
    }
    else{
      Serial.println(String(no) +"번 LED를 켭니다");
    }
  
    for (int i =0;i<8;i++){
      if (i+1==no){
        digitalWrite(pins[i],HIGH);
      }
      else{
        digitalWrite(pins[i],LOW);
      }
    }
  process_it = false;
  buffer = "";
  }
}