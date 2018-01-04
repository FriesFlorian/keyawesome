int btnPin = 5;

void setup() {
  pinMode(btnPin, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  while (digitalRead(btnPin) == HIGH) {
    // do nothing until pin 5 goes low
    delay(100);
  }
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('t');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("htop");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}





