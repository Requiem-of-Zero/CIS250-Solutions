#include "Fun.h"

int Fun::count = 0; // the count has to be intialized before the main function runs.

int main () {
  cout << "Name: Samuel Wong - Program Name: Static Fun - Date: 9/22/2024" << endl;
  
  Fun F1;
  cout << "F1 count: " << F1.getCount() << endl;
  Fun F2;
  cout << "F2 count: " << F2.getCount() << endl;
  Fun F3;
  cout << "F3 count: " << F3.getCount() << endl;
  Fun F4;
  cout << "F4 count: " << F4.getCount() << endl;
  
  return 0;
} // end of program