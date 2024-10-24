#include <iostream>
using namespace std;
// Main function to test the code
void passByValue(int x);
void passByReference(int *x);

int main() {
  cout << "Name: Samuel Wong - Program Name: Pass by Value/Reference Bucky Video - Date: 10/27/2024" << endl;
  int betty = 13;
  int sandy = 13;
  passByValue(betty);
  passByReference(&sandy);
  
  cout << "bettty is now " << betty << endl;
  cout << "sandy is now " << sandy << endl;
  
  return 0;
}

void passByValue(int x){
  x = 99;
}

void passByReference(int *x){
  *x = 66;
}
