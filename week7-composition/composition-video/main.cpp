#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

int main () {
  cout << "Name: Samuel Wong - Program Name: Composition Video - Date: 9/29/2024" << endl;
  
  Birthday birthObj(12,28,1986);
  
  People buckyRoberts("Bucky the King", birthObj);
  
  buckyRoberts.printInfo();
} // end of program
