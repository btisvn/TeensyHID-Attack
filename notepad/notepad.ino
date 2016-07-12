void setup()
{
  delay(5000); //Delay required for OS to connect the device properly
  Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI); //Tell Teensy to press Windows key
  Keyboard.set_key1(KEY_R); //Tell Teensy to press R
  Keyboard.send_now(); //Press "Windows key + R"
  
  delay(500); //Wait for half second
  Keyboard.set_modifier(0); //Tell Teensy to release Windows key
  Keyboard.set_key1(0); //Tell Teensy to release R
  Keyboard.send_now(); //Release "Windows key + R"
  //Teensy should open a run prompt now
  Keyboard.print("notepad"); //Type notepad in the run prompt
  Keyboard.set_key1(KEY_ENTER); //Tell Teensy to press Enter key
  Keyboard.send_now(); //Press Enter

  Keyboard.set_key1(0); //Tell Teensy to release Enter
  Keyboard.send_now(); //Release Enter
  delay(2000); //Wait for notepad to open
  Keyboard.print("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent pellentesque mi lectus, quis congue augue eleifend ut. Suspendisse condimentum suscipit condimentum. Pellentesque non nisi dapibus, gravida mi a, lacinia quam. Donec quis lorem ac sapien condimentum sollicitudin a ac risus. Suspendisse eget tempus justo. Donec felis sem, venenatis at justo non, sollicitudin lobortis nisi. Duis dictum nisi mi. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec placerat porta erat, eu varius libero hendrerit vel. Nulla ultricies purus est, a tristique nisl hendrerit in. Aenean euismod aliquet faucibus. Nullam quis est ut tortor fermentum semper sed ac lacus. Proin sit amet eros egestas nulla elementum sodales id ut nunc. Duis et felis eget sem efficitur auctor non nec mauris. Maecenas cursus pretium ipsum vitae vulputate. Integer vitae hendrerit orci. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Ut ornare ex a consectetur malesuada. Nulla vel leo vitae quam efficitur porta nec ac nibh. Etiam a faucibus magna. Mauris dignissim turpis at tortor faucibus consequat. Fusce sagittis, ante vitae dignissim fringilla, lacus lorem interdum odio, a molestie lorem velit vitae leo. Maecenas sit amet metus id eros condimentum vehicula. Curabitur eget rhoncus tellus. Cras semper nibh in lectus egestas, quis porttitor nulla pellentesque. Donec tempor faucibus ultrices. Mauris dictum ultricies neque fermentum efficitur. Duis feugiat vel lacus et viverra. Aliquam nec tellus nisi. Curabitur dapibus neque vitae venenatis aliquet. Aenean sed massa sollicitudin, porta leo et, tincidunt eros. Proin erat metus, ultricies et elementum id, mollis vitae dolor. Curabitur vehicula ante finibus lacus accumsan, eu dignissim metus ultrices. Morbi a nulla quis sapien sodales interdum sed non ligula. Donec eu metus ornare urna porta consequat sed eget ipsum. Nulla ligula nunc, tempor sed ullamcorper quis, accumsan eu lacus. Sed lobortis efficitur tortor eu vestibulum. Donec sollicitudin fringilla porta. Sed aliquam, dui ut semper tristique, ligula massa dapibus est, eu elementum nulla mauris accumsan leo. Nunc ipsum tortor, scelerisque vitae iaculis eget, placerat quis tellus. Vivamus malesuada suscipit ex, at mattis felis vestibulum non. Phasellus in elit id ligula ornare efficitur nec a magna. Phasellus non porttitor tellus. Morbi ac dapibus dolor, a convallis orci. Vivamus nunc tellus, semper id ex a, gravida ultrices augue. Donec commodo neque quis diam rhoncus accumsan. Cras nisi purus, lobortis vitae quam a, condimentum dapibus arcu. Phasellus porta semper accumsan. Duis pellentesque rhoncus turpis, at convallis ipsum finibus vitae. Fusce pretium scelerisque felis, eu feugiat turpis tincidunt at. Pellentesque ut augue eget orci scelerisque porttitor. Interdum et malesuada fames ac ante ipsum primis in faucibus. Proin eleifend volutpat tellus eu placerat. Sed porta, arcu et sollicitudin mattis, ante augue elementum lectus, a porta quam nisl tincidunt sem. Duis eleifend nisl tortor, non mattis lacus interdum at.");
}

void loop()
{
}
