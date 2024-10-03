#ifndef Header_h
#define Header_h
#pragma once
#include <iostream>

using namespace std;

class aThing { // declaring class
  private:
    double weight;
  public: // declare public members block of the class
    aThing(): weight(10){};
    double getWeight() const;
    void setWeight(double inWeight);
};

#endif /* Header_h */