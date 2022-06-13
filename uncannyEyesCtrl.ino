// Uncanny eyes controller
// https://www.hackster.io/projects/376a13/
// 2018 Laurent Moll
// MIT License

#include <HardwareSerial.h>
#include <WiiChuck.h>

Accessory nunchuck;

HardwareSerial SerialOut(1); // 2nd UART, going to the skulls

void setup() {
  Serial.begin(921600); // Super fast because the WiiChuck library dumps data to serial and it adds lag into the reading at lower speeds
  SerialOut.begin(9600, SERIAL_8N1, -1, 13); // Tx only, no Rx
  nunchuck.begin();
  nunchuck.type = NUNCHUCK;
}

void loop() {

  char serCmd[11];
  static char oldSerCmd[11] = "          ";

  nunchuck.readData();    // Read inputs and update maps
  serCmd[0] = '0';
  serCmd[1] = (nunchuck.getButtonC() ? 'I' : 'O');
  serCmd[2] = (nunchuck.getButtonZ() ? 'I' : 'O');
  int joyX = nunchuck.getJoyX();
  serCmd[3] = '0' + ((joyX/100) % 10);
  serCmd[4] = '0' + ((joyX/10) % 10);
  serCmd[5] = '0' + ((joyX/1) % 10);
  int joyY = nunchuck.getJoyY();
  serCmd[6] = '0' + ((joyY/100) % 10);
  serCmd[7] = '0' + ((joyY/10) % 10);
  serCmd[8] = '0' + ((joyY/1) % 10); 
  serCmd[9] = ' '; 
  serCmd[10] = '\0'; 
  if (strcmp(serCmd, oldSerCmd)) { // Only send serial command when the serial command has changed
    SerialOut.write(serCmd);
    strcpy(oldSerCmd, serCmd);
  }
}
