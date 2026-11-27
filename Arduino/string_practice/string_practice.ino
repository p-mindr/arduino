void setup() {
  while (!Serial){

  }
  // put your setup code here, to run once:
  Serial.begin(9600);
  String str;
  char c='A';
  int n =1234;
  float f =3.1415;

  str ="character array";
  Serial.println(str);

  str = c;
  Serial.println(str);

  str = String(n,BIN);
  Serial.println(str);

  str = String(f,4);
  Serial.println(str);
  
  String

}

void loop() {
  // put your main code here, to run repeatedly:

}
