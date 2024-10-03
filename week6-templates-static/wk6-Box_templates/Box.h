#ifndef Header_h
#define Header_h
#pragma once
#include <iostream>

using namespace std;

template <class T>
class Box {
  private:
    T width, height, depth;
  public:
    Box(): width(2), height(2), depth(2){};
  void setWidth(T inWidth);
  void setHeight(T inHeight);
  void setDepth(T inDepth);
  T getWidth() const;
  T getHeight() const;
  T getDepth() const;
  T calcVolume() const;
  T calcArea() const;
};

template <class T>
void Box<T>::setWidth(T inWidth){
  width = inWidth;
}

template <class T>
void Box<T>::setHeight(T inHeight){
  height = inHeight;
}

template <class T>
void Box<T>::setDepth(T inDepth){
  depth = inDepth;
}

template <class T>
T Box<T>::getWidth() const {
  return width;
}

template <class T>
T Box<T>::getHeight() const {
  return height;
}

template <class T>
T Box<T>::getDepth() const {
  return depth;
}

template <class T>
T Box<T>::calcVolume() const {
  if(height <= 0 || width <= 0 || depth <= 0){
    cout << "Error: All dimensions must be greater than 0. Exit code: ";
    return 1;
  } else {
    return width * height * depth;
  }
}

template <class T>
T Box<T>::calcArea() const {
  if(height <=0 || width <= 0 || depth <= 0){
    cout << "Error: All dimensions must be greater than 0. Exit code: ";
    return 1;
  } else {
    T area = 2 * ((depth * width) + (depth * height) + (width * height));
    return area;
  }
}
#endif /* Header_h */