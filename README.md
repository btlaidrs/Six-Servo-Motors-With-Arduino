# Arduino 6 Servo Motor Control
This project demonstrates how to control 6 servo motors using an Arduino. The servo motors will perform a sweeping motion for 2 seconds and then hold their position at 90°.

## Features
- Controls 6 servo motors using the Arduino.
- Servos sweep from 0° to 180° and back within 2 seconds.
- After sweeping, all servos hold at 90° for the rest of the time.
  
## Components Needed
- Arduino board (e.g., Arduino Uno, Mega, etc.)
- 6 servo motors
- External power supply (if necessary for the servos)
- Jumper wires
- Breadboard (optional, for easier connections)
- Wiring Diagram
  
## Servo Connections:

- Connect each servo’s signal pin to the following Arduino pins:
  - Servo 1: Pin 3
  - Servo 2: Pin 5
  - Servo 3: Pin 6
  - Servo 4: Pin 9
  - Servo 5: Pin 10
  - Servo 6: Pin 11
- Connect each servo’s power pin to the power supply (usually 5V).
- Connect each servo’s ground pin to the ground (GND) of the Arduino and the external power supply (if used).

## Simulation:
1. Servo motors at 0 degrees: ![image](https://github.com/user-attachments/assets/d805062a-f1e7-4f4e-992a-7b809aaac033)
2. Servo motors at 90 degrees: ![image](https://github.com/user-attachments/assets/ed7ceea5-0b2b-4b0d-8700-ff1297e1e000)


  
## Powering the Servos:

- If the servos require more power than the Arduino can provide, use an external power supply.
- Make sure the ground of the external power supply is connected to the ground of the Arduino.

  
## Code Explanation
The Arduino code controls 6 servo motors using the Servo library. Here's a breakdown of the code:

1. Global Variables:
    - Servo servos[6]: An array of Servo objects to control 6 servos.
    - int servoPins[]: The Arduino pins to which the servos are attached.
    
2. setup() Function:
    - The setup() function attaches each servo motor to its corresponding pin and then calls the functions to sweep the motors and set them to 90°.
  
3. sweepServos() Function:
    - This function sweeps each servo motor from 0° to 180° and then back to 0°, creating a sweeping motion. The sweep lasts 2 seconds.

4. holdServosAt90() Function:
    - After the sweep, this function sets all servos to 90° and holds them there indefinitely.

5. loop() Function:
    - The loop() function remains empty because the required actions occur in setup().

## How to Upload the Code
1. Open the Arduino IDE.
2. Copy the code provided above into a new sketch.
3. Connect the Arduino to your computer using a USB cable.
4. Select the correct board and port in the Arduino IDE.
5. Click on the Upload button to upload the code to the Arduino.

## Troubleshooting
- Servo doesn't move: Make sure the servos are powered properly and the control wires are connected to the correct pins on the Arduino.
- Power supply issue: If using an external power supply, ensure the ground (GND) is shared between the Arduino and the power supply.
- Servos not moving correctly: Check if the servo's range of motion is limited by the wiring or any obstructions.
