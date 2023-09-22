# ESP32 TNT Eye Display Project

This project allows you to display animated eyes on a 2.5-inch TFT screen using the ESP32 microcontroller. Follow the steps below to set up your development environment and get your project up and running.

## Table of Contents

- [Prerequisites](#prerequisites)
- [Installation](#installation)
  - [Arduino IDE](#arduino-ide)
  - [ESP32 Board Support](#esp32-board-support)
- [Wiring](#wiring)
- [Flash the Code](#flash-the-code)

## Prerequisites

Before you begin, make sure you have the following hardware and software components:

- ESP32 microcontroller
- 2.5-inch TFT screen compatible with the ESP32
- USB cable for programming and power
- A computer running Windows, macOS, or Linux
- Internet connection

## Installation

### Arduino IDE

1. **Download Arduino IDE:**
   - Visit the official [Arduino website](https://www.arduino.cc/en/software) and download the latest version of the Arduino IDE for your operating system.

2. **Install Arduino IDE:**
   - Follow the installation instructions for your specific operating system.

### ESP32 Board Support

1. **Open Arduino IDE:**
   - Launch the Arduino IDE on your computer.

2. **Add ESP32 Board Support:**
   - In the Arduino IDE, go to `File > Preferences`.
   - In the "Additional Boards Manager URLs" field, add the following URL:
     ```
     https://dl.espressif.com/dl/package_esp32_index.json
     ```
   - Click "OK" to close the Preferences window.

3. **Install ESP32 Board Support:**
   - Go to `Tools > Board > Boards Manager`.
   - In the search bar, type "ESP32" and press Enter.
   - Click on "ESP32 by Espressif Systems" and click the "Install" button.

4. **Select ESP32 Board:**
   - After installation, go to `Tools > Board` and select your ESP32 board from the list (e.g., "ESP32 Dev Module").

## Wiring

Connect your ESP32 and 2.5-inch TFT screen according to your specific hardware. Provide a clear and detailed schematic or description of the wiring in this section. Include pins used for data communication, power supply, and any additional components. You can connect two display's as well.

Example:

- **ESP32 SDA (Data) Pin** ⟶ **TFT Screen SDA Pin**
- **ESP32 SCL (Clock) Pin** ⟶ **TFT Screen SCL Pin**
- **ESP32 3.3V Pin** ⟶ **TFT Screen VCC**
- **ESP32 GND Pin** ⟶ **TFT Screen GND**

## Flash the Code

1. **Clone this Repository:**
   - Clone or download this project repository to your computer.

2. **Open the Arduino Sketch:**
   - Launch the Arduino IDE and open the `.ino` file from the project repository.

3. **Configure Settings:**
   - Go to `Tools` and configure the following settings:
     - Board: Select your ESP32 board (e.g., "ESP32 Dev Module").
     - Port: Select the COM port your ESP32 is connected to.

4. **Upload the Code:**
   - Click the "Upload" button (right arrow icon) in the Arduino IDE.
   - Wait for the code to compile and upload to the ESP32.

5. **View the Output:**
   - Once the upload is complete, you should see the animated eyes displayed on the 2.5-inch TFT screen.

Congratulations! You have successfully set up and installed the Arduino IDE, added ESP32 board support, and flashed the code to create an eye display on your ESP32 with a 2.5-inch TFT screen.
