#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cout << "Samuel Wong - 8/28/2024" << endl;
//  Create constant with size for 12 x 12 matrix
  const int SIZE = 12;
//  Label for aesthetics for the multiplication table
  cout << "Multiplication Table" << endl;

// Iterate through the rows
  for(int row = 1; row <= SIZE; ++row){
// Iterate through the colums
    for(int col = 1; col <= SIZE; ++col){
// Print the result of every number from 1-12 rows * columns index value
      cout << setw(4) << row * col;
    }
// Start a new line after every new row
    cout << endl;
  }
}
