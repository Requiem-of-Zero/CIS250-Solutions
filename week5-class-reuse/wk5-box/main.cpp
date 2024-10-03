#include "Box.h" //step 1

int main () {
  cout << "Name: Samuel Wong - Program Name: Box Class 2 - Date: 9/15/2024" << endl;
  Box B1;    //step 2

  B1.setWidth(2); //step 3

  B1.setHeight(3); //step 3

  B1.setDepth(4); //step 3

  cout << "B1 Height = " << B1.getHeight() << endl; //step 3

  cout << "B1 Area = " << B1.calcArea() << endl; //step 3

  cout << "B1 Volume = " << B1.calcVolume() << endl; //step 3

  // Box 2 - Test zero value error for calc Area and Volume of sides functions

  Box B2; //step 2

  B2.setWidth(3); //step 3

  B2.setHeight(4); //step 3

  cout << "B2 Depth = " << B2.getDepth() << endl; //step 3

  cout << "B2 Area = " << B2.calcArea() << endl; //step 3

  cout << "B2 Volume = " << B2.calcVolume() << endl; //step 3
  
  return 0;
} // end of program