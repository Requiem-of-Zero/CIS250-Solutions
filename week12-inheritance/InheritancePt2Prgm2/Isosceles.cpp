#include <iostream>
#include "Isosceles.h"
using namespace std;

Isosceles::Isosceles(){
  base = 0;
}

Isosceles::Isosceles(int newBase, int newSideOne, int newHeight)
  : Triangle(newHeight){
  base = newBase;
  sideOne = newSideOne;
}

int Isosceles::getBase() const {
  return base;
}

int Isosceles::getSideOne() const {
  return sideOne;
}

void Isosceles::setBase(int newBase){
  base = newBase;
}

void Isosceles::setSideOne(int newSideOne){
  sideOne = newSideOne;
}

Isosceles::~Isosceles(){}

int Isosceles::getPerimeter() const {
  return ((2 * sideOne) + base);
}

void Isosceles::printInfo() const {
  cout << endl << "Perimeter: " << getPerimeter() << endl;
  cout << "Area: " << getArea(base) << endl;
}
