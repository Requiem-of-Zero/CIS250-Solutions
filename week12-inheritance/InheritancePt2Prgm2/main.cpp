#include <iostream>
#include "Isosceles.h"

using namespace std;

int main() {
  cout << "Name: Samuel Wong - Program Name: Inheritance Part 2 Program 2 - Date: 11/3/2024" << endl;
  int base, height, equalSide;
  
  cout << "Please type in a base length: " << endl;;
  cin >> base;
  cout << "Please type in the height: " << endl;
  cin >> height;
  cout << "Please type in the side that is equal: " << endl;
  cin >> equalSide;
  
  Isosceles myTriangle(base, equalSide, height);
  
  cout << endl;
  myTriangle.printInfo();
  
  return 0;
}