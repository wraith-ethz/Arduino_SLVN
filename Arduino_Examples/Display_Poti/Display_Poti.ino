// install the "Adafruit LED Backpack" and "Adafruit GFX" for Arduino studio
#include <Wire.h>
#include <Adafruit_GFX.h>
#include "Adafruit_LEDBackpack.h"

Adafruit_BicolorMatrix matrix = Adafruit_BicolorMatrix();
int color_count = 0;  

void setup() {
  // pass in the address to the matrix
  matrix.begin(0x70);  
  
  // we dont want text to wrap so it scrolls nicely
  matrix.setTextWrap(false);  
  
  // full screen text
  matrix.setTextSize(1);

  // rotate the screen
  matrix.setRotation(3);
}

void loop() {
  if(color_count == 0){
    matrix.setTextColor(LED_GREEN);
  }
  if(color_count == 1){
    matrix.setTextColor(LED_YELLOW);
  }
  if(color_count == 2){
    matrix.setTextColor(LED_RED);
  }

  for (int8_t x=7; x>=-66; x--) {
    matrix.clear();
    matrix.setCursor(x,0);
    matrix.print("Hallo SLVN");
    matrix.writeDisplay();

    // check poti to make it faster or slower
    int poti_delay = analogRead(A1);
    delay( 50 + poti_delay/10 );
  }

  // increment the color changing variable, and reset it when its bigger than 2
  color_count++;
  if(color_count > 2){
    color_count = 0;
  }
  
}