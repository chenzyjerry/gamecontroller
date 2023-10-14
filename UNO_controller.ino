int B1_pin = 2;
int B2_pin = 3;
int SW_pin = 8;

void setup() {
 pinMode(B1_pin,INPUT_PULLUP);
 pinMode(B2_pin,INPUT_PULLUP);
 pinMode(SW_pin,INPUT_PULLUP);
 
Serial.begin(9600);
}

void loop() {
  int X = analogRead(A1);
  int Y = analogRead(A0);
  int x = map(X, 1, 1023, 1917, 2);
  int y = map(Y, 1, 1023, 2, 1077);
  
if(digitalRead(B1_pin)==LOW){
Serial.print("a");

}else{
  Serial.print("b");
}

Serial.print(" ");
if(digitalRead(B2_pin)==LOW){
Serial.print("e");

}else{
  Serial.print("f");
}

Serial.print(" ");
if(digitalRead(SW_pin)==LOW){
Serial.print("c");

}else{
  Serial.print("z");
}

Serial.print(" ");
Serial.print(x);
Serial.print(" ");
Serial.print(y);
Serial.print(" ");
Serial.println("m");
delay(180);
}
