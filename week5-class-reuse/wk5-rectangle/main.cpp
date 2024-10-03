#include "Rectangle.h" //step 1

int main () {
  cout << "Name: Samuel Wong - Program Name: Rectangle Area 2 - Date: 9/15/2024" << endl;
  
  Rectangle rect1; //step 2
  rect1.setValues(5,6); //step 3
  cout << "Rectangle 1 area: " << rect1.area() << endl; //step 3

  Rectangle rect2; //step 2
  rect2.setValues(3,4); //step 3
  cout << "Rectangle 2 area: " << rect2.area() << endl; return 0; //step 3
  
  return 0;
} // end of program
