void setup() {
  // configure all LEDs as outputs
  pinMode(3, OUTPUT);   // set pin 3 as output, for LED 0
  pinMode(4, OUTPUT);   // set pin 4 as output, for LED 1
  pinMode(5, OUTPUT);   // set pin 5 as output, for LED 2
  pinMode(6, OUTPUT);   // set pin 6 as output, for LED 3
  pinMode(7, OUTPUT);   // set pin 7 as output, for LED 4
  pinMode(8, OUTPUT);   // set pin 8 as output, for LED 5
  pinMode(9, OUTPUT);   // set pin 9 as output, for LED 6
  pinMode(10, OUTPUT);   // set pin 10 as output, for LED 7

  // Configure all switches as inputs
  pinMode(A2, INPUT);   // set pin A2 as input, for switch 0
  pinMode(A3, INPUT);   // set pin A3 as input, for switch 1
  pinMode(A4, INPUT);   // set pin A4 as input, for switch 2
  pinMode(A5, INPUT);   // set pin A5 as input, for switch 3
  pinMode(A6, INPUT);   // set pin A6 as input, for switch 4
  pinMode(0, INPUT);   // set pin 0 as input, for switch 5
  pinMode(13, INPUT);   // set pin 13 as input, for switch 6
  pinMode(14, INPUT);   // set pin 14 as input, for switch 7
}

void loop() {
  // check if a switch is set (upper position), if so, enable the LED, else disable it
  
  if( digitalRead(A2) == HIGH){
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, LOW);
  }

  if( digitalRead(A3) == HIGH){
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4, LOW);
  }

  if( digitalRead(A4) == HIGH){
    digitalWrite(5, HIGH);
  }
  else{
    digitalWrite(5, LOW);
  }

  if( digitalRead(A5) == HIGH){
    digitalWrite(6, HIGH);
  }
  else{
    digitalWrite(6, LOW);
  }

  if( digitalRead(A6) == HIGH){
    digitalWrite(7, HIGH);
  }
  else{
    digitalWrite(7, LOW);
  }

  if( digitalRead(0) == HIGH){
    digitalWrite(8, HIGH);
  }
  else{
    digitalWrite(8, LOW);
  }

  if( digitalRead(13) == HIGH){
    digitalWrite(9, HIGH);
  }
  else{
    digitalWrite(9, LOW);
  }

  if( digitalRead(14) == HIGH){
    digitalWrite(10, HIGH);
  }
  else{
    digitalWrite(10, LOW);
  }
}