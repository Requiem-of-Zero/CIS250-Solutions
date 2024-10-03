#include "Box.h"

void Box::setWidth(int x){
  width = x;
}

void Box::setHeight(int y){
  height = y;
}

void Box::setDepth(int z){
  depth = z;
}

int Box::getWidth() const {
  return width;
}

int Box::getHeight() const {
  return height;
}

int Box::getDepth() const {
  return depth;
}

int Box::calcVolume() const {
  if(height <=0 || width <= 0 || depth <= 0){
    cout << "Error: All dimensions must be greater than 0. Exit code: " << endl;
    return 1;
  } else {
    return width * height * depth;
  }
}

int Box::calcArea() const {
  if(height <=0 || width <= 0 || depth <= 0){
    cout << "Error: All dimensions must be greater than 0. Exit code: " << endl;
    return 1;
  } else {
    int area = 2 * ((depth * width) + (depth * height) + (width * height));
    return area;
  }
}