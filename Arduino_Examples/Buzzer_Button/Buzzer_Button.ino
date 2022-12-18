void setup() {
  // initialize buzzer (pin 2) as output
  pinMode(2, OUTPUT);

  // initialize button (pin 1) as input
  pinMode(1, INPUT);
}

void loop() {
  // check if button is pressed write a square wave out, if not then not
  if(digitalRead(1) == LOW){
    // write it as ananalog output with 50% duty cycle
    analogWrite(2, 128);
  }
  else{
    analogWrite(2, 0);
  }

  // wait 5ms
  delay(5);
}