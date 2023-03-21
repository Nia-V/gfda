#include "Display4.h"

const byte table[10]=
{
    B11111100,  // 0
  B01100000,  // 1
  B11011010,  // 2
  B11110010,  // 3
  B01100110,  // 4
  B10110110,  // 5
  B10111110,  // 6
  B11100000,  // 7
  B11111110,  // 8
  B11100110,  // 9
};

SSeg::SSeg(int D1, int D2, int D3, int D4, int latch,){
this->D1= D1;
this->D2= D2;
this->D3= D3;
this->D4= D4;
this->latch = latch;
this->clock = clock;
this->data = data;
}
SSeg::init(){
  pinMode(D1, OUTPUT);
 pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
   pinMode(D4, OUTPUT);
   pinMode(latch, OUTPUT);
   pinMode(clock, OUTPUT);
   pinMode(data, OUTPUT);
}

SSeg::display(int x, int y, int z, int a){


    digitalWrite(D2, 1);
    digitalWrite(D3, 1);
    digitalWrite(D4, 1);
    digitalWrite(D1, 0);
      digitalWrite(latch, 0);
    shiftOut(data, clock, LSBFIRST, table[num3]);
           digitalWrite(latch, 1);



digitalWrite(D1, 1);
    digitalWrite(D3, 1);
    digitalWrite(D4, 1);
    digitalWrite(D2, 0);
      digitalWrite(latch, 0);
    shiftOut(data, clock, LSBFIRST, table[num2]);
           digitalWrite(latch, 1);


digitalWrite(D1, 1);
    digitalWrite(D2, 1);
    digitalWrite(D4, 1);
    digitalWrite(D3, 0);
      digitalWrite(latch, 0);
    shiftOut(data, clock, LSBFIRST, table[num1]);
           digitalWrite(latch, 1);
  

digitalWrite(D1, 1);
    digitalWrite(D2, 1);
    digitalWrite(D3, 1);
    digitalWrite(D4, 0);
      digitalWrite(latch, 0);
    shiftOut(data, clock, LSBFIRST, table[num]);
           digitalWrite(latch, 1);
}

