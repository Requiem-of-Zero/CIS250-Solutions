#include <iostream>
using namespace std;

void printNumber(int x){
  cout << "i am printing an integer " << x << endl;
}

void printNumber(float x){
  cout << "now i am printg a float" << x << endl;
}

int main() {
  cout << "Name: Samuel Wong - Program Name: Bucky Video 1 - Date: 11/24/2024" << endl;
  int a = 54;
  float b = 32.4896;
  
  printNumber(a);
  printNumber(b);
}