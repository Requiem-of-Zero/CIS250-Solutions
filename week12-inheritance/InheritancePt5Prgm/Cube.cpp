#include "Cube.h"

int Cube::getDepth() const {
  return depth;
}

void Cube::setDepth(int newDepth){
  depth = newDepth;
}

int Cube::getVolume() const {
  return getWidth() * getHeight() * depth;
}
