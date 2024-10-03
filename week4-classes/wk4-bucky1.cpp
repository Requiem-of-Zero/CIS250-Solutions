#include <iostream>

using namespace std;

class BuckysClass { // declaring class
  public: // declare public members block of the class
    void coolSaying() const {  // declare the cool saying public class function
      cout << "preachin to the choir" << endl;
    }
};

int main () {
  cout << "Name: Samuel Wong - Program Name: Bucky1 - Date: 9/8/2024" << endl;
  BuckysClass buckysObject; // instantiate the bucky object instance
  buckysObject.coolSaying(); // invoke the cool saying function in the buckyObject instance
  return 0;
} // end of program