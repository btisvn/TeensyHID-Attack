void setup() {
  delay(5000); //Delay required for OS to connect the device properly
  Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI); //Tell Teensy to press Windows key
  Keyboard.set_key1(KEY_R); //Tell Teensy to press R
  Keyboard.send_now(); //Press "Windows key + R"
  
  delay(500); //Wait for half second
  Keyboard.set_modifier(0); //Tell Teensy to release Windows key
  Keyboard.set_key1(0); //Tell Teensy to release R
  Keyboard.send_now(); //Release "Windows key + R"
  //Teensy should open a run prompt now
  Keyboard.print("mspaint"); //Type notepad in the run prompt
  Keyboard.set_key1(KEY_ENTER); //Tell Teensy to press Enter key
  Keyboard.send_now(); //Press Enter

  Keyboard.set_key1(0); //Tell Teensy to release Enter
  Keyboard.send_now(); //Release Enter
  delay(2000); //Wait for notepad to open
  
  } // no setup needed
void loop() {
  int i;
//  right and up
  for (i=0; i<50; i++) {
    Mouse.set_buttons(1, 0, 0);
    Mouse.move(2, -1);
    delay(25);
  }
//  right and down
  for (i=0; i<40; i++) {
    Mouse.set_buttons(1, 0, 0);
    Mouse.move(2, 2);
    delay(25);
  }
//  left and up
  for (i=0; i<40; i++) {
    Mouse.set_buttons(1, 0, 0);
    Mouse.move(-4, -1);
    delay(25);
  }

  delay(2000);
}
