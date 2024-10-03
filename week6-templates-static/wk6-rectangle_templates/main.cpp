#include "Rectangle.h"

int main () {
  cout << "Name: Samuel Wong - Program Name: Rectangle 3 - Date: 9/22/2024" << endl;
  Rectangle<int> intRectangle;
  intRectangle.setValues(5, 6);
  cout << "Integer rectangle area: " << intRectangle.area() << endl;

  Rectangle<double> doubleRectangle;
  doubleRectangle.setValues(3.251, 15.0);
  cout << "Double rectangle area: " << doubleRectangle.area() << endl;
  
  Rectangle<float> floatRectangle;
  floatRectangle.setValues(6.5f, 3.5f);
  cout << "Float rectangle area: " << floatRectangle.area() << endl;
  
  Rectangle<long int> longRectangle;
  longRectangle.setValues(1234L, 5678L);
  cout << "Long rectangle area: " << longRectangle.area() << endl;
  
  return 0;
} // end of program
