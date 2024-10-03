#ifndef WholeClass_h
#define WholeClass_h
#include "PartClass.h"
#pragma once

class myWholeClass {
private:
  int x;
  myPartClass Part1;
public:
  void setPart1D(double inD) {Part1.setD(inD); }
  double getPart1D() {return Part1.getD(); }
  int getX() {return x; }
  void setX( int inX) {x = inX;}
  myPartClass Part2;
  
  myWholeClass(){ x=0; }
  myWholeClass(int inX, double inD1, double inD2){
    x = inX;
    Part1.setD(inD1);
    Part2.setD(inD2);
  }
};

#endif /* WholeClass_h */