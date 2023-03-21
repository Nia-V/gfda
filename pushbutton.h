/*
Goal: interface for pb class
Themes: class
*/

#ifndef pushbutton_h//if pb class is not yet defined
#define pushbutton_h// define pb class
#include <Arduino.h>//include default arduino library
class pb{//declase pb class
private:// only avaiable in class
int pin;//declare pin property
bool Stopper=0;//declare bool stopper property default at 0
int counter=0;// declare counter property default at 0
bool state;// declare state property
public://available outside class
pb();//overlaod class constructor
pb(int pin);//class constructor pb with argument pin

void init();//declares method init returns void
bool pressed();//declares method pressed returns bool
int count();//declares method count returns integer
void print();//declares method print returns void
};


#endif