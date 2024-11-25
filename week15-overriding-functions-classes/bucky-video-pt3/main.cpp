#include <iostream>
#include "Sally.h"

int main(){
  cout << "Name: Samuel Wong - Program Name: Bucky Video 3 - Date: 11/24/2024" << endl;
  
  Sally a(34);
  Sally b(21);
  Sally c;
  c= a+b;
  cout << c.num << endl;
}
