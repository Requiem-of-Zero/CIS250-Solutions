#include <iostream>
using namespace std;
#include "Cube.h"

int main(){
  cout << "Name: Samuel Wong - Program Name: Inheritance Part 5 Program - Date: 11/3/2024" << endl;
  Cube cube1, cube2, cube3;
  
  int width, height, depth;
  // Input and display for Cube 1
  cout << "Enter dimensions for Cube 1:" << endl;
  cout << "Width: "; cin >> width;
  cout << "Height: "; cin >> height;
  cout << "Depth: "; cin >> depth;
  cube1.setWidth(width);
  cube1.setHeight(height);
  cube1.setDepth(depth);
  cout << "Volume of Cube 1: " << cube1.getVolume() << endl;

  // Input and display for Cube 2
  cout << "\nEnter dimensions for Cube 2:" << endl;
  cout << "Width: "; cin >> width;
  cout << "Height: "; cin >> height;
  cout << "Depth: "; cin >> depth;
  cube2.setWidth(width);
  cube2.setHeight(height);
  cube2.setDepth(depth);
  cout << "Volume of Cube 2: " << cube2.getVolume() << endl;

  // Input and display for Cube 3
  cout << "\nEnter dimensions for Cube 3:" << endl;
  cout << "Width: "; cin >> width;
  cout << "Height: "; cin >> height;
  cout << "Depth: "; cin >> depth;
  cube3.setWidth(width);
  cube3.setHeight(height);
  cube3.setDepth(depth);
  cout << "Volume of Cube 3: " << cube3.getVolume() << endl;
  return 0;
}         //end of program