/* Buttons to USB Joystick Example

   You must select Joystick from the "Tools > USB Type" menu

   This example code is in the public domain.
*/

#include <Bounce.h>

// Create Bounce objects for each button.  The Bounce object
// automatically deals with contact chatter or "bounce", and
// it makes detecting changes very simple.
Bounce button01 = Bounce(2, 10);  // which is appropriate for
Bounce button02 = Bounce(3, 10);  // most mechanical pushbuttons
Bounce button03 = Bounce(4, 10);
Bounce button04 = Bounce(5, 10);
Bounce button05 = Bounce(6, 10);
Bounce button06 = Bounce(31, 10);
Bounce button07 = Bounce(32, 10);
Bounce button08 = Bounce(33, 10);
Bounce button09 = Bounce(34, 10);
Bounce button10 = Bounce(35, 10);
Bounce button11 = Bounce(36, 10);
Bounce button12 = Bounce(37, 10);
Bounce button13 = Bounce(38, 10);
Bounce button14 = Bounce(39, 10);
Bounce button15 = Bounce(20, 10);
Bounce button16 = Bounce(21, 10);
Bounce button17 = Bounce(22, 10);
Bounce button18 = Bounce(23, 10);
Bounce button19 = Bounce(0, 10);
Bounce button20 = Bounce(1, 10);

void setup() {
  // Configure the pins for input mode with pullup resistors.
  // The pushbuttons connect from each pin to ground.  When
  // the button is pressed, the pin reads LOW because the button
  // shorts it to ground.  When released, the pin reads HIGH
  // because the pullup resistor connects to +5 volts inside
  // the chip.  LOW for "on", and HIGH for "off" may seem
  // backwards, but using the on-chip pullup resistors is very
  // convenient.  The scheme is called "active low", and it's
  // very commonly used in electronics... so much that the chip
  // has built-in pullup resistors!
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(20, INPUT_PULLUP);
  pinMode(21, INPUT_PULLUP);
  pinMode(22, INPUT_PULLUP);
  pinMode(23, INPUT_PULLUP);
  pinMode(31, INPUT_PULLUP);
  pinMode(32, INPUT_PULLUP);
  pinMode(33, INPUT_PULLUP);
  pinMode(34, INPUT_PULLUP);
  pinMode(35, INPUT_PULLUP);
  pinMode(36, INPUT_PULLUP);
  pinMode(37, INPUT_PULLUP);
  pinMode(38, INPUT_PULLUP);
  pinMode(39, INPUT_PULLUP);

  // Please be aware the X, Y, Z, Zr and Slider axes will have default
  // settings, if you only use the buttons.  This can give the appearance
  // of the buttons interfering with the axes, if your PC software shows
  // different default assumed values before your first button press.
  //  More details here:
  //  https://forum.pjrc.com/threads/29320-Teensy-3-1-Button-problems?p=80275#post80275
}

void loop() {
  // Update all the buttons.  There should not be any long
  // delays in loop(), so this runs repetitively at a rate
  // faster than the buttons could be pressed and released.
  button01.update();
  button02.update();
  button03.update();
  button04.update();
  button05.update();
  button06.update();
  button07.update();
  button08.update();
  button09.update();
  button10.update();
  button11.update();
  button12.update();
  button13.update();
  button14.update();
  button15.update();
  button16.update();
  button17.update();
  button18.update();
  button19.update();
  button20.update();

  // Check each button for "falling" edge.
  // Update the Joystick buttons only upon changes.
  // falling = high (not pressed - voltage from pullup resistor)
  //           to low (pressed - button connects pin to ground)
  if (button01.fallingEdge()) {
    Joystick.button(1, 1);
  }
  if (button02.fallingEdge()) {
    Joystick.button(2, 1);
  }
  if (button03.fallingEdge()) {
    Joystick.button(3, 1);
  }
  if (button04.fallingEdge()) {
    Joystick.button(4, 1);
  }
  if (button05.fallingEdge()) {
    Joystick.button(5, 1);
  }
  if (button06.fallingEdge()) {
    Joystick.button(6, 1);
  }
  if (button07.fallingEdge()) {
    Joystick.button(7, 1);
  }
  if (button08.fallingEdge()) {
    Joystick.button(8, 1);
  }
  if (button09.fallingEdge()) {
    Joystick.button(9, 1);
  }
  if (button10.fallingEdge()) {
    Joystick.button(10, 1);
  }
  if (button11.fallingEdge()) {
    Joystick.button(11, 1);
  }
  if (button12.fallingEdge()) {
    Joystick.button(12, 1);
  }
  if (button13.fallingEdge()) {
    Joystick.button(13, 1);
  }
  if (button14.fallingEdge()) {
    Joystick.button(14, 1);
  }
  if (button15.fallingEdge()) {
    Joystick.button(15, 1);
  }
  if (button16.fallingEdge()) {
    Joystick.button(16, 1);
  }
  if (button17.fallingEdge()) {
    Joystick.button(17, 1);
  }
  if (button18.fallingEdge()) {
    Joystick.button(18, 1);
  }
  if (button19.fallingEdge()) {
    Joystick.button(19, 1);
  }
  if (button20.fallingEdge()) {
    Joystick.button(20, 1);
  }

  // Check each button for "rising" edge
  // Update the Joystick buttons only upon changes.
  // rising = low (pressed - button connects pin to ground)
  //          to high (not pressed - voltage from pullup resistor)
  if (button01.risingEdge()) {
    Joystick.button(1, 0);
  }
  if (button02.risingEdge()) {
    Joystick.button(2, 0);
  }
  if (button03.risingEdge()) {
    Joystick.button(3, 0);
  }
  if (button04.risingEdge()) {
    Joystick.button(4, 0);
  }
  if (button05.risingEdge()) {
    Joystick.button(5, 0);
  }
  if (button06.risingEdge()) {
    Joystick.button(6, 0);
  }
  if (button07.risingEdge()) {
    Joystick.button(7, 0);
  }
  if (button08.risingEdge()) {
    Joystick.button(8, 0);
  }
  if (button09.risingEdge()) {
    Joystick.button(9, 0);
  }
  if (button10.risingEdge()) {
    Joystick.button(10, 0);
  }
  if (button11.risingEdge()) {
    Joystick.button(11, 0);
  }
  if (button12.risingEdge()) {
    Joystick.button(12, 0);
  }
  if (button13.risingEdge()) {
    Joystick.button(13, 0);
  }
  if (button14.risingEdge()) {
    Joystick.button(14, 0);
  }
  if (button15.risingEdge()) {
    Joystick.button(15, 0);
  }
  if (button16.risingEdge()) {
    Joystick.button(16, 0);
  }
  if (button17.risingEdge()) {
    Joystick.button(17, 0);
  }
  if (button18.risingEdge()) {
    Joystick.button(18, 0);
  }
  if (button19.risingEdge()) {
    Joystick.button(19, 0);
  }
  if (button20.risingEdge()) {
    Joystick.button(20, 0);
  }
  
}
