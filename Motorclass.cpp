/*
Goal: definitions for car class
Themes: class
*/


#include "Motorclass.h"// include header file

Movement(int x, int y, int z, int a){ //Defining a function named base with int inputs x, y, z, a.
  analogWrite(5, x);                     // analog write pin 5 the value of parameter x (LEFT SPEED)
  analogWrite(6, y);                     // analog write pin 6 the value of parameter y (RIGHT SPEED)
  digitalWrite(7, z);                    // digital write to pin 7 the value of parameter z(LEFT FORWARD/REVERSE)
  digitalWrite(8, a);                    // digital write to pin 8 the value of parameter a(RIGHT FORWARD/REVERSE)
  digitalWrite(3, 1); }              // digital write to pin 3 5V (STANDBY PIN)

void Car::init(){// defining init method
pinMode(5,OUTPUT);// initializing 5 as output
pinMode(6,OUTPUT);// initializing 6 as output
pinMode(7,OUTPUT);// initializing 7 as output
pinMode(8,OUTPUT);// initializing 8 as output
pinMode(3,OUTPUT);// initializing 3 as output
}
void Car::move(String Dir, int speed){//defining move methoud with arguments DIR and Speed
  this->Dir = Dir;// saving dir to the private dir
  this->speed = speed;// saving speed to the private speed

if(Dir == "forwards"){//if the string is "forwards"
   Movement(speed, speed, 1, 1);}//call the movment function

if(Dir == "backwards"){//if the string is "backwards"
   Movement(speed, speed, 0, 0); }//call the movment function

if(Dir == "right"){//if the string is "right"
   Movement(speed/2, speed, 0, 1);}//call the movment function

if(Dir == "left"){//if the string is "left"
  Movement(speed, speed/2, 1, 0);}//call the movment function
 }

 void Car::STOP(){          // Method to stop mouvment of car
  analogWrite(5, 0);   // LEFT SPEED 0//write to all pins 0 to stop the car
  analogWrite(6, 0);   // RIGHT SPEED 0
  digitalWrite(7, 0);  // LEFT MOTORS REVERSE
  digitalWrite(8, 0);  // RIGHT MOTOR REVERSE
  digitalWrite(3, 0); }


void Car::Forwards(int speed){//defining the forward method
  Movement(speed, speed, 1, 1);}//call the movment function

void Car::Backwards(int speed){//defining the backwards method
 Movement(speed, speed, 0, 0);}//call the movment function

void Car::Left(int speed){//defining the left method
  Movement(speed, speed/1.5, 1, 0);}//call the movment function

void Car::Right(int speed){ //defining the right method
   Movement(speed/1.5, speed, 0, 1);}//call the movment function
