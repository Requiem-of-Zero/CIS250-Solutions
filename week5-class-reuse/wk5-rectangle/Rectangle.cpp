#include "Rectangle.h"

void Rectangle::setValues(int x, int y){
  width = x;
  height = y;
}

int Rectangle::area() const {
  int answer = width * height;
  return answer;
}