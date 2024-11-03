#ifndef CUBE_h
#define CUBE_h
#include <iostream>
#include "Square.h"
using namespace std;

class Cube: public Square {
private:
  int depth;
public:
  int getDepth() const;
  void setDepth(int);
  int getVolume() const;
};

#endif /* CUBE_h */
