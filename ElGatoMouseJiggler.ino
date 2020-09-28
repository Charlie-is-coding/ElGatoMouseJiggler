#include "Mouse.h"


void setup() {

Mouse.begin();

}

void loop() {

int xVal = 5;
int yVal = 5;


Mouse.move(xVal, yVal, 0);
delay(100);
Mouse.move(-xVal, -yVal, 0);

// second delay is the time interval between "jiggles" (mouse moves).
// The time is set in milliseconds (1 s = 1000 ms).

// To set the time interval please set the value below:
// 1 minute = 60000 (ms)
// 2 minutes = 120000
// 3 minutes = 180000
// 4 miutes = 240000
// 5 minutes = 300000


delay(270000); 

// This is set for 4,5 minutes, as the screen is set to turn off after 5 minutes of idle.

}
