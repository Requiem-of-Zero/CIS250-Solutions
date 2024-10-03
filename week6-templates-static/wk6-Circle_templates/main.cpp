#include "Circle.h"

int main () {
  cout << "Name: Samuel Wong - Program Name: Circle 3 - Date: 9/22/2024" << endl;
  
  Circle<int> intCircle;
  intCircle.printRadius();
  cout << "intCircle Circumference: " << intCircle.calcCircumference() << endl;
  cout << "intCircle Area: " << intCircle.calcArea() << endl;
  cout << "intCircle Diameter: " << intCircle.calcDiameter() << endl;
  
  Circle<double> doubleCircle;
  doubleCircle.setRadius(5.54);
  doubleCircle.printRadius();
  cout << "doubleCircle Circumference: " << doubleCircle.calcCircumference() << endl;
  cout << "doubleCircle Area: " << doubleCircle.calcArea() << endl;
  cout << "doubleCircle Diameter: " << doubleCircle.calcDiameter() << endl;
  
  Circle<float> floatCircle;
  floatCircle.setRadius(2.435f);
  floatCircle.printRadius();
  cout << "floatCircle Circumference: " << floatCircle.calcCircumference() << endl;
  cout << "floatCircle Area: " << floatCircle.calcArea() << endl;
  cout << "floatCircle Diameter: " << floatCircle.calcDiameter() << endl;
  
  Circle<long int> longCircle;
  longCircle.setRadius(123156L);
  longCircle.printRadius();
  cout << "longCircle Circumference: " << longCircle.calcCircumference() << endl;
  cout << "longCircle Area: " << longCircle.calcArea() << endl;
  cout << "longCircle Diameter: " << longCircle.calcDiameter() << endl;
  
  return 0;
} // end of program
