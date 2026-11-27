int pins[] = {0,1,2,3,4,5,6,7};

void setup() {
  for (int i = 0;i < 8; i++){
    pinMode(pins[i], OUTPUT);
  }

}

void loop() {
  for(int i =0; i <8; i++){
    digitalWrite(pins[i] , HIGH);
    
  }
  delay(1000);
  for (int i =0; i < 8; i++){
    digitalWrite(pins[i] , LOW); 
  }
  delay(1000);
  // put your main code here, to run repeatedly:

}



