#ifndef PartClass_h
#define PartClass_h
#pragma once
#include <iostream>
using namespace std;

class myPartClass{
private:
  double d;
public:
  myPartClass() {d = 0;}
  myPartClass(double inD) {d = inD;}
  double getD() { return d; }
  void setD(double inD) {d = inD;}
};

#endif /* PartClass_h */