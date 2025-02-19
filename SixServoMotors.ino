#include <Servo.h>

// Define 6 servo objects globally
Servo servos[6];

// Define the pins for the servos
int servoPins[] = {3, 5, 6, 9, 10, 11}; // Adjust pins if needed

void setup() {
  // Attach the servos to the pins
  for (int i = 0; i < 6; i++) {
    servos[i].attach(servoPins[i]);
  }
  
  // Sweep each servo for 2 seconds
  sweepServos();
  
  // After 2 seconds, set all servos to 90 degrees
  holdServosAt90();
}

void loop() {
  // Nothing needed here, everything runs in setup
}

// Sweep all servos from 0 to 180 degrees and back
void sweepServos() {
  for (int angle = 0; angle <= 180; angle++) {
    for (int i = 0; i < 6; i++) {
      servos[i].write(angle);  // Move servo to the angle
    }
    delay(10);  // Delay to make the sweep visible
  }
  delay(2000);  // Wait for 2 seconds before holding position
}

// Hold all servos at 90 degrees
void holdServosAt90() {
  for (int i = 0; i < 6; i++) {
    servos[i].write(90);  // Set each servo to 90 degrees
  }
}
