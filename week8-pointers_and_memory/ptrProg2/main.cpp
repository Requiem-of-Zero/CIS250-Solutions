#include <iostream>
using namespace std;
// Step 1 - Define a class
class myClass {
private:
  int x;
public:
  myClass( ) { x = 0; }
  myClass( int inX ) { x = inX; }
  int getX( ) { return x; }
  void setX( int inX ) { x = inX; }
};

int main(){
  cout << "Name: Samuel Wong - Program Name: Ptr Prog 2 - Date: 10/6/2024" << endl;
  myClass C1; // create class instance of C1

  C1.setX(42); // set the X value with the setX() function normally with dot notation passing in the value
  cout << C1.getX() << endl; // output to the console the x value with the getX() function
  myClass *ptrMyClass; // declare a myClass pointer variable
  ptrMyClass = NULL; // set the pointer as a null pointer memory address
  ptrMyClass = &C1; // set the pointer of the class to point to the memory address of the C1 class instance
  cout << "Used Arrow - Value of X is: " << ptrMyClass -> getX() << endl; // output to the console the pointer variable that points to C1 and output C1 X value
  ptrMyClass -> setX(104); // set the x value of the class that ptrMyClass references through the memory address value set to it
  cout << "Used Arrow - Value of X is: " << ptrMyClass -> getX() << endl; // output to the console the pointer variable that points to C1 and output C1 X value
  
  myClass C2(123); // create parameterized class instance of C2
  
  myClass *ptrMyClass2; // create a class pointer variable to point to the address of C2
  ptrMyClass2 = NULL; // set the pointer to a null pointer in memory
  ptrMyClass2 = &C2; // set the memory address of the C2 instance in memory to the pointer variable
  
  cout << "Used Arrow - Value of X is: " << ptrMyClass2 -> getX() << endl; // output to the console the pointer variable that points to C2 and output C2 X value
  ptrMyClass2 -> setX(333); // set the x value of the class that ptrMyClass2 references through the memory address value set to it
  
  cout << "Used Arrow - Value of X is: " << ptrMyClass2 -> getX() << endl; // output to the console the pointer variable that points to C2 and output C2 X value
return 0;
}
