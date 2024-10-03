#ifndef Header_h
#define Header_h
#pragma once
#include <iostream>
#include <cmath>

using namespace std;

template <class T>
class Circle {
  private:
    T radius;
  public:
    Circle(): radius(3){};
    void setRadius(T inRadius);
    void printRadius() const;
    T getRadius() const;
    T calcCircumference() const;
    T calcArea() const;
    T calcDiameter() const;
};

template <class T>
void Circle<T>::setRadius(T inRadius){
  radius = inRadius;
}

template <class T>
void Circle<T>::printRadius() const {
  if(radius > 0){
    cout << "Radius: " << radius << endl;
  } else {
    cout << "Error: Radius must be greater than 0.";
  }
}

template <class T>
T Circle<T>::getRadius() const {
  return radius;
}

template <class T>
T Circle<T>::calcCircumference() const {
  if(radius > 0){
    return 2 * M_PI * radius;
  } else {
    cout << "Error: Radius must be greater than 0 to calculate circumference. Error code: ";
    return 1;
  }
}

template <class T>
T Circle<T>::calcArea() const {
  if(radius > 0){
    return M_PI * radius * radius;
  } else {
    cout << "Error: Radius must be greater than 0 to calculate area. Error code: ";
    return 1;
  }
}

template <class T>
T Circle<T>::calcDiameter() const {
  if(radius > 0){
    return 2 * radius;
  } else {
    cout << "Error: Radius must be greater than 0 to calculate area. Error code: ";
    return 1;
  }
}

#endif /* Header_h */