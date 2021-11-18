/*

*/
#ifndef Display_h
#define Display_h

#include "Arduino.h"

class Display
{
  public :
    Display(int _f1, int _f2, int _f3, int _f4, int _a, int _b, int _c, int _d, int _e, int _f, int _g, int _p);
    void Write(int Zahl1, int Zahl2, int Zahl3, int Zahl4);
    void show();
    void showDot();
    void Write2Numbers(int Zahl11, int Zahl12);
    void WriteNumber(int Zahlen);
  private :
    int Zahl;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int p;
    int f1;
    int f2;
    int f3;
    int f4;
    int set = 0;
    int x;
    int y;
    int Stelle1;
    int Stelle2;
    int Stelle3;
    int Stelle4;
    
};

class SmartTools
{
  public :
    SmartTools();
    void TURN(int LEDBeg, int LEDEnd, int Zustand2);
    void dW(int LED, int Zustand3);
  private :
    int C;
    int a;
} ;

class Delay
{
  public :
    Delay(int pin);
    void WAIT(int DelayZeit,int Zustand);
    void STOP(int Zustand);
  private :
    int _pin;
    int C;
    int a;
} ;

#endif
