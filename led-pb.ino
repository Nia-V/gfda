#include "led.h"
#include "pushbutton.h"
led One(2);
led Two(3);
led Three(5);
led Four(4);
pb push(6);
void setup(){
push.init();
One.init();
Two.init();
Three.init();
Four.init();
}
void loop(){
  push.pressed();
switch (push.count()%4) {
  case 1:
    // statements
    One.on();
Two.off();
Three.off();
Four.off();

    break;
  case 2:
    // statements
    One.off();
Two.on();
Three.off();
Four.off();
    break;
      case 3:
    // statements
    One.off();
Two.off();
Three.on();
Four.off();
    break;
      case 0:
    // statements
    One.off();
Two.off();
Three.off();
Four.on();
    break;
  default:
    // statements
    One.off();
Two.off();
Three.off();
Four.off();
    break;
}
push.print();
}