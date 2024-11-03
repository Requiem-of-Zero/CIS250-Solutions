#ifndef ColorPicker_h
#define ColorPicker_h
using namespace std;
#include <string>
#include <ctime>
#include <stdio.h>      /* NULL */
#include <stdlib.h>     /* srand, rand */
#include <iostream>

class ColorPicker {

private:
  string colorArray[8];

public:
  ColorPicker();
  void printAllColors();
  string randomColor();
};

#endif /* ColorPicker_h */
