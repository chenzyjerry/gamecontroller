int B1_pin = 2; //set digital pin for top button
int B2_pin = 3; //set digital pin for bottom button
int SW_pin = 8; //set digital pin for joystick button

void setup() { //set pin mode for all buttons
 pinMode(B1_pin,INPUT_PULLUP);
 pinMode(B2_pin,INPUT_PULLUP);
 pinMode(SW_pin,INPUT_PULLUP);
 
Serial.begin(9600);
}

void loop() {
  int X = analogRead(A1); //read X and Y values for joystick axes
  int Y = analogRead(A0);
  int x = map(X, 1, 1023, 1917, 2);
  int y = map(Y, 1, 1023, 2, 1077);
  
if(digitalRead(B1_pin)==LOW){
Serial.print("a"); //prints 'a' if top button is not pressed

}else{
  Serial.print("b"); //prints 'b' if top button is pressed
}

Serial.print(" ");
if(digitalRead(B2_pin)==LOW){
Serial.print("e"); //prints 'e' if top button is not pressed

}else{
  Serial.print("f"); //prints 'f' if top button is pressed
}

Serial.print(" ");
if(digitalRead(SW_pin)==LOW){
Serial.print("c"); //prints 'c' if top button is not pressed

}else{
  Serial.print("z"); //prints 'z' if top button is pressed
}

Serial.print(" ");
Serial.print(x); //print joystick X axis value
Serial.print(" ");
Serial.print(y); //print joystick Y axis value
Serial.print(" ");
Serial.println("m");
delay(180);
}
