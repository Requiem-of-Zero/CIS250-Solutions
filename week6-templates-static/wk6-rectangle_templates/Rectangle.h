#ifndef Header_h
#define Header_h
#pragma once
#include <iostream>

using namespace std;

template <class T>
class Rectangle {
  private:
    T width, height;
  public:
    Rectangle(): width(10), height(10){};
    void setValues(T inWidth, T inHeight);
    T area() const;
};

template <class T>
T Rectangle<T>::area() const {
  return width * height;
}

template <class T>
void Rectangle<T>::setValues(T inWidth, T inHeight){
  width = inWidth;
  height = inHeight;
}


#endif /* Header_h */