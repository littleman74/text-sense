#include <Shifty.h>
Shifty shift;

//I need 96 pins
void setup() {
  Serial.begin(9600);
  shift.setBitCount(96);
  // Set the clock, data, and latch pins you are using
  // This also sets the pinMode for these pins
  shift.setPins(11, 12, 8);
  Serial.println("reset");
}

void loop() {
  // writeBit works just like digitalWrite
  shift.writeBit(1, HIGH);
}

int translatetext(String inputText, int rate) {


}
