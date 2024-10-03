#include <iostream>
using namespace std;
#include <string>

class myClass {
    private:
       int x; // private int member 'x'
    public:
       myClass( ) { x = 0; } // default constructor intializing x to 0
       myClass( int inX ) { x = inX; } // parameterized constructor initializing x as inX value
       int getX( ) { return x; } // getter to return x value of the object
       void setX( int inX ) { x = inX; } // setter to set x value as inX value
};

void fun1( myClass &inC1) // takes a reference to a 'myClass' object memory address
{
    inC1.setX(42); // modifies the object at the given memory address directly: sets x to 42
 }

void fun2( myClass *inC2) // takes a dereferenced pointer (memory address value) 'myClass' object as an arguement
{
    inC2->setX(66); // dereferences the pointer and calls setX function to set x to 66
 }

int main()
{
  cout << "Name: Samuel Wong - Program Name: Ptr Prog 4 - Date: 10/6/2024" << endl;
  std::string name; // declare a string variable: name
  std::cout << "What is your name? "; // output to the user asking their name
  getline (std::cin, name); // Reads the user's name from input and sets the inputted value as the value for the name variable
  std::cout << "Hello friend,  " << name << "!\n"; // Greet the user
  myClass mainC1; // declare an instance of the myClass class called mainC1
  cout << mainC1.getX() << endl; //calls the getter function of myClass to get the default constructor value of 0
  fun1( mainC1 ); // call to fun1, passing 'mainC1' as the reference object
  cout << mainC1.getX() << endl; // x is now 42 after calling fun1 since it references the input object and sets the X value for the input object
  fun2 ( &mainC1 ); // call to fun2, passing a pointer to mainC1's memory address to set the X value of mainC1's reference address with dereferencing and calling the setX function
  cout << mainC1.getX() << endl; // After calling fun2, x for 'mainC1' is 66
  
  return 0;
}
