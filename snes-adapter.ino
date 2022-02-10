// Arduino Leonardo SNES Adapter
// by thearst3rd

// Gamepad Mapping:
// Button 1 - B
// Button 2 - A
// Button 3 - Y
// Button 4 - X
// Button 5 - L
// Button 6 - R
// Button 7 - Select
// Button 8 - Start
// Hat 1 - DPad

#include <Joystick.h>

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, JOYSTICK_TYPE_GAMEPAD,
  8, 1,                 // 8 buttons, 1 hat
  false, false, false,  // no left x, y, or z axes
  false, false, false,  // no right x, y, or z axes
  false, false,         // no rudder or throttle
  false, false, false); // no accelerator, brake, or steering

void setup() {
  Joystick.begin();
}

void loop() {
  Joystick.setButton(0, 1);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  Joystick.setButton(0, 0);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
