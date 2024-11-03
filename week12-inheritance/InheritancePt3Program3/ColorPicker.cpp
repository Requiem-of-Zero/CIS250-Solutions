#include <iostream>
#include "ColorPicker.h"
using namespace std;

ColorPicker::ColorPicker(){
  string colors[8] = {"Red", "Green", "Purple", "Yellow", "Orange", "Indigo", "Blue", "Gray"};
  for(int i=0; i < 8; i++){
    colorArray[i] = colors[i];
  }
}

void ColorPicker::printAllColors() {
// use for loop to print out all colors
  for (int i = 0 ;i < 8; i++){
    cout << colorArray[i] << endl;
  }
}

string ColorPicker::randomColor() {
  auto seed = chrono::steady_clock::now().time_since_epoch().count();
  srand(static_cast<unsigned int>(seed));
  // pick a random number between 0 and 7
  int i =0;
  i = rand()%7;
  return colorArray[i];
}