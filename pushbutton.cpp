/*
Goal: definitions for pb class
Themes: class
*/

#include "pushbutton.h"

pb::pb(int pin){//Definition of class constructor pb
this->pin = pin;// private pin is equal to argument pin
}
void pb::init(){//definitiion of init method
  pinMode(pin, INPUT_PULLUP);//initialise pin as input pullup
  Serial.begin(9600);// intitialise serial moniter
}


bool pb::pressed(){//definition of pressed method
  // read the state of the switch into a local variable:
  int debounceDelay = 50;//declaring debounce delay with value 50
  int lastDebounceTime;//declaring variable used to store last debounce time
  bool buttonState;//declaring variable used to store buttonstate
  bool lastButtonState = 0;// declaring variable used to store lats button state defaulted at 0
  bool reading = !digitalRead(pin);//declaring variable reading used to save value of pushbutton

  // check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH), and you've waited long enough
  // since the last press to ignore any noise:

  // If the switch changed, due to noise or pressing:
  if (reading != lastButtonState) {
    // reset the debouncing timer
   unsigned long lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the button state has changed:
    if (reading != buttonState) {
      buttonState = reading;//save the value of reading to buttonstate
     
    }
  }
  // save the reading. Next time through the loop, it'll be the lastButtonState:
  lastButtonState = reading;//save the value of reading to last button state
state = buttonState;// save the value of buttonstate to the private property state
  return buttonState;// return the value of button state
}

int pb::count(){//definition of count method 

if(state==1 && Stopper == 0){// if button is pressed and stopper value is 0, is activated once when the button is pressed(aka not continuously)
      Stopper = 1;//sets stopper true
    counter++;// add one to private property counter
    }
    if(state==0) { //if button is not pressed (activated continuously)
      Stopper = 0; // sets stoper false
    }
return counter;// returns the value of counter
}
void pb::print(){//defining method print
Serial.print("State =");//print state =
Serial.print(state);//print the value of state
Serial.print(" Counter =");//print counter =
Serial.println(counter);//print the value of coungter
}