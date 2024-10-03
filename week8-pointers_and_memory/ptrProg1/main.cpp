#include <iostream>
#include "Test.h"

using namespace std;

int main () {
  cout << "Name: Samuel Wong - Program Name: Ptr Prog 1 - Date: 10/6/2024" << endl;
  Test TC1;
  TC1.testNullPtr(); // dereferencing the null pointer will cause a crash since you are trying to assign a value to a null memory address
  for (int i = 0; i < 1000000000; ++i) {
      TC1.memoryLeak();
      // The loop will cause the program to consume more memory over time without freeing it
  }
  string *ptrS = TC1.deletePointer();
  cout << "ptrS dereferenced value: " << *ptrS << endl; // you get 'Carlos' because it returns the memory address 'Carlos' is stored in memory
  TC1.testTwoAlias(); // a memory address that points to another memory address returning a dereferenced value at the chain referenced memory addresses
  return 0;
} // end of program
