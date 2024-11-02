#ifndef ISOSCELES_h
#define ISOSCELES_h
using namespace std;
#include <iostream>
#include "Triangle.h"

class Isosceles: public Triangle {
public:
  Isosceles();
  Isosceles(int, int, int);
  int getBase() const;
    //  getBase() - gets base length of triangle
    //  @return int - base length of triangle
  int getSideOne() const;
//  Mutator Function
  void setBase(int);
    //  setBase - sets base length of triangle
    //  @param int - base length of triangle
  void setSideOne(int);
//  Destructor
  ~Isosceles();
//  getPerimeter
  int getPerimeter() const;
    //  getPerimeter - returns the perimeter of triangle
    //  @return int - perimeter of triangle
  void printInfo() const;
    //  printInfo - prints the perimeter and area of triangle
private:
//  Member Variables
  int base, sideOne;
};

#endif /* ISOSCELES_h */
