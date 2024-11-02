#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

int main() {
  cout << "Name: Samuel Wong - Program Name: Inheritance Part 2 Program 1 - Date: 11/3/2024" << endl;
  Mother mom;
  mom.sayName();
  
  Daughter tina;
  tina.sayName();
  return 0;
}