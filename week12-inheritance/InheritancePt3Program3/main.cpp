#include <iostream>
#include "ColorPicker.h"
using namespace std;


int main(){
  ColorPicker P;
  P.printAllColors();
  cout << "Random Color: " << P.randomColor() << endl;
  //system("pause");
  return 0;
}