#include <iostream>

using namespace std;

// square integer function for num1
int squareInteger(int num){
  return num * num;
}

// square double function for num2
double squareDouble(double num2){
  return num2 * num2;
}

// square float function for num3
float squareFloat(float num3){
  return num3 * num3;
}

int main() {
  cout << "Samuel Wong - 8/28/2024" << endl;
// Delcare int, double, and float varibles with given values
  int num1 = 6;
  double num2 = 6.9;
  float num3 = 9.1;
// Print the results of the created functions
  cout << squareInteger(num1) << endl;
  cout << squareDouble(num2) << endl;
  cout << squareFloat(num3) << endl;
// Returns 0 out of the function
return 0;
}