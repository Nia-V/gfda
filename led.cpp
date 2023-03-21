#include "led.h"
led::led(int pin){
  this->pin = pin;
}
void led::init(){
pinMode(pin, OUTPUT);
}
void led::off(){
digitalWrite(pin, 0);
}
void led::on(){
digitalWrite(pin, 1);
}