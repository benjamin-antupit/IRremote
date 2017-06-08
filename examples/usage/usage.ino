// Example usage for IRremote library by shirriff.

#include "IRremote.h"

// Initialize objects from the lib
IRremote iRremote;

void setup() {
    // Call functions on initialized library objects that require hardware
    iRremote.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    iRremote.process();
}
