int pins[] = {4,5};

void setup() {
  Serial.begin(9600);
  for(int i =0;i<2;i++){
    pinMode(pins[i],INPUT);
  }
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<2; i++){
    bool state = digitalRead(pins[i]);
    if(state){
      Serial.print("O ");

    }
    else{
      Serial.print("X ");
    }
  }
  Serial.println();
  delay(1000);
}
