const int ledPin = LED_BUILTIN;
int ledstate = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int waittime=1000;
  for (int ; waittime>=200; waittime-=100){     ///tog  ///while(true)깥은거 쓰면 안됨 잘못하면 무한반복을 할 수도 있음 임베디드 시스템에선 더 조심해야함/// 
    digitalWrite(ledPin, ledstate);     /// delay는 안쓰는게 좋음  multitask 라고 있는데///
    delay(waittime);   ///센서를 측정하는걸하고 delay말고 mulitasking으로 milis는 모든 장치가 쓰는 고용시간을 설정 pointer///
    ledstate = !ledstate;
    Serial.println(ledstate? "켜짐":"꺼짐");

    digitalWrite(ledPin, ledstate);
    delay(waittime);
    ledstate = !ledstate;

    Serial.println(waittime);
    Serial.println(ledstate? "켜짐":"꺼짐");
    }
  for (; waittime<=900; waittime+=100){
    digitalWrite(ledPin, ledstate);
    ledstate = !ledstate;
    Serial.println(ledstate? "켜짐":"꺼짐");
    delay(waittime);
    digitalWrite(ledPin,ledstate);
    ledstate = !ledstate;
    
    delay(waittime);
    Serial.println(waittime);
    Serial.println(ledstate? "켜짐":"꺼짐");
    }
  
}