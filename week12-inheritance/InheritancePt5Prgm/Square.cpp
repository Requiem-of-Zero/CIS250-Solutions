#include "Square.h"

int Square::getWidth() const {
  return width;
}

void Square::setWidth(int newWidth){
  width = newWidth;
}

int Square::getHeight() const {
  return height;
}

void Square::setHeight(int newHeight){
  height = newHeight;
}

int Square::getArea() const {
  return width * height;
}
