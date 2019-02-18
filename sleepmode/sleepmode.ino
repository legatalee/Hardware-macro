#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  delay(1200);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("notepad\n\n\n");
  delay(900);
  Keyboard.print("You just activated my trap card!\n");
  delay(100);
  Keyboard.print("I'll count 5 second.\n");
  delay(1000);
  Keyboard.print("5\n");
  delay(1000);
  Keyboard.print("4\n");
  delay(1000);
  Keyboard.print("It     was     J    O    K    E");
  delay(800);
  Keyboard.press(KEY_LEFT_GUI);
  delay(100);
  Keyboard.press('x');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.press('u');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.press('s');
  Keyboard.releaseAll();
}

void loop() {
}
