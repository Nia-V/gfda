#ifndef led_h
#define led_h
#include <Arduino.h>
class led{
private:
int pin;

public:
led();
led(int pin);
void on();
void off();
void init();
};
#endif