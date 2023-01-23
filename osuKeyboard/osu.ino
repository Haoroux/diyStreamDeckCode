
//The used librairies
#include <Keyboard.h>

//les pins des switchs
const int ButtonPin1 = 4;
const int ButtonPin2 = 3;
const int modButtonPin = 2;

//états des switchs
int ButtonState1 = 0;
int ButtonState2 = 0;
int modButtonState = 0;

//selected mod
int modSelect = 0;

void setup() 
{
  pinMode(ButtonPin1, INPUT_PULLUP);
  pinMode(ButtonPin2, INPUT_PULLUP);
  pinMode(modButtonPin, INPUT_PULLUP);
}

void loop() 
{
  ButtonState1 = !digitalRead(ButtonPin1);
  ButtonState2 = !digitalRead(ButtonPin2); 
  modButtonState = !digitalRead(modButtonPin); 
    if (ButtonState2 == 1)
    {
      ctrlVFunc();
    }

    //control C
    if (ButtonState1 == 1)
    {
      ctrlCFunc();
    }
}

//profile1
void ctrlCFunc()
{
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.print("c");
  Keyboard.releaseAll();
  delay(400);
  return(0);
}

void ctrlVFunc()
{
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.print("v");
  Keyboard.releaseAll();
  delay(400);
  return(0);
}

//profile 2
void windowsDfunc()
{
  Keyboard.press(KEY_RIGHT_GUI);
  Keyboard.print("d");
  Keyboard.releaseAll();
  delay(400);
  return(0);
}

void ctrlZFunc()
{
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.print("z");
  Keyboard.releaseAll();
  delay(400);
  return(0);
}
