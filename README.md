# Arduino_SLVN
Board for Arduino MKRZero with various buttons / LEDs etc. to learn programming for young children

## Setup

### Assembly
 * Assemble the board according to the file `THT Assembly Drawing.pdf` in the repository under `PCB/Assembly/`
 * The 8x8 Bi-Color LED Matrix from Adafruit can be assembled according to [this link](https://learn.adafruit.com/adafruit-led-backpack/bi-color-8x8-matrix-assembly)

### Installing the Software
 * Download Arduino IDE from [here](https://www.arduino.cc/en/software) and install it
 * Configure Arduino IDE:
  * [libraries](https://docs.arduino.cc/software/ide-v2/tutorials/ide-v2-installing-a-library): install `Adafruit LED Backpack` and `Adafruit GFX` (they are used for the 8x8 matrix)
  * [boards](https://docs.arduino.cc/software/ide-v2/tutorials/ide-v2-board-manager): install `Arduino SAMD Bards` (supports the used Arduino MKRZero board / SAMD21 / ARM Cortex-M0 core)

### Arduino Blocks
 *  go to [ArduinoBlocks.com](http://www.arduinoblocks.com/), create a login

## Workflow
 * create your awesome code on ArduinoBlocks (examples are in the repository folder `/ArduinoBlocks_Examples/`)
  * Use the `MEGA 2560` as project type
  * give it a name, and start coding
 * Connect the board to the PC
 * Start Arduino IDE and create a new sketch (make sure that you have selected the MKRZero as board and the correct COM port)
 * in ArduinoBlocks, go to `Blocks->View Code`
 * Press the `Copy button`
 * Paste it in the Arduino IDE and upload the sketch
 * The Board should now do what you want
 * Enjoy :)