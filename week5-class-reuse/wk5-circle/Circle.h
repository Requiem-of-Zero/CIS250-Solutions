#ifndef Header_h
#define Header_h
#pragma once
#include <iostream>
#include <cmath> 
using namespace std;

class Circle { 
  private:
    double radius;
  public: 
    Circle(): radius(1){}
    void setRadius(double);
    void printRadius() const;
    double getRadius() const;
    double calcCircumference() const;
    double calcArea() const;
    double calcDiameter() const;
};

#endif /* Header_h */
