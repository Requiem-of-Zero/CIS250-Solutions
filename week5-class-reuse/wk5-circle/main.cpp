#include "Circle.h" //step 1

int main () {
  cout << "Name: Samuel Wong - Program Name: Circle Class 2 - Date: 9/15/2024" << endl;
  Circle myCircle; //step 2

  myCircle.setRadius(5); //step 3

  myCircle.printRadius(); //step 3

  cout << "Circumference: " << myCircle.calcCircumference() << endl; //step 3

  cout << "Area: " << myCircle.calcArea() << endl; //step 3
 
  cout << "Diameter: " << myCircle.calcDiameter() << endl; //step 3

  return 0;
} // end of program
