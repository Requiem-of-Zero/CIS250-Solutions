#include <iostream>
using namespace std;
// Main function to test the code
int add(int x);

int main() {
  cout << "Name: Samuel Wong - Program Name: Pass by Value/Reference Video - Date: 10/27/2024" << endl;
  int data = 10;
  data = add(data);
  cout << "Value in data = " << data << endl;
  return 0;
}

int add(int x){
  int input; //variable to store input number
  cout << "Enter the value to be added in data" << endl;
  cin >> input;
  x = x + input;
  return x;
}

