#include <iostream>
using namespace std;
// Main function to test the code
void add(int &x);

int main() {
  cout << "Name: Samuel Wong - Program Name: Pass by Value/Reference Video 2 - Date: 10/27/2024" << endl;
  int data = 10;
  add(data);
  cout << "Value in data = " << data << endl;
  return 0;
}

void add(int &x){
  int input;
  cout << "Enter the value to be added in data" << endl;
  cin >> input;
  x = x + input;
}