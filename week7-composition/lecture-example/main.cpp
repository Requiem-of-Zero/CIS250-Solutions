#include <iostream>
#include "WholeClass.h"
#include "PartClass.h"
using namespace std;

int main () {
  cout << "Name: Samuel Wong - Program Name: Lecture Example - Date: 9/29/2024" << endl;
  
  myWholeClass Whole1;
  cout << "Whole 1 - default constructor - whole X = " << Whole1.getX() << endl;
  cout << "Whole 1 - default constructor - Part1 d = " << Whole1.getPart1D() << endl;
  cout << "Whole 1 - default constructor - Part2 d = " << Whole1.Part2.getD() << endl;
  Whole1.setX(20);
  cout << "Whole 1 - set whole X = " << Whole1.getX() << endl;
  Whole1.setPart1D(21);
  cout << "Whole 1 - set Part 1 d = " << Whole1.getPart1D() << endl;
  Whole1.Part2.setD(22);
  cout << "Whole - set Part 2 d = " << Whole1.Part2.getD() << endl << endl;
  
  myWholeClass Whole2(91, 92, 93);
  
  cout << "Whole 2 - Parm constuctor - whole X = " << Whole2.getX() << endl;
  cout << "Whole 2 - Parm constuctor - Part 1 d = " << Whole2.getPart1D() << endl;
  cout << "Whole 2 - Parm constuctor - Part 2 d = " << Whole2.Part2.getD() << endl;
  
  Whole2.setX(51);
  cout << "Whole 2 - set whole X = " << Whole2.getX() << endl;
  Whole2.setPart1D( 52);
  cout << "Whole 2 - set Part 1 d = " << Whole2.getPart1D() << endl;
  Whole2.Part2.setD(53);
  cout << "Whole 2 - set Part 2 d = " << Whole2.Part2.getD() << endl;
//  system("pause");
  return 0;
} // end of program
