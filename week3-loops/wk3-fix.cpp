#include <iostream>

using namespace std;

int main() {
  cout << "Samuel Wong - 8/28/2024" << endl;
//  Declare iterator at 1 and condition to loop as long as the iterator is less than or equal to 10 (1 - 10)
  for(int i = 1; i <= 10; i ++) {
//  Print to the console
     cout << "i = " << i << endl;
  }
//  Doesn't work on UNIX systems, only on windows; it will pause the console and wait for input
  system("pause");
//  Return out of the function
  return 0;
}