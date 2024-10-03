#ifndef Header_h
#define Header_h
#pragma once
#include <iostream>

using namespace std;

class Rectangle { 
  private:
    int width, height;
  public: 
    Rectangle(): width(10), height(10) {}
    void setValues(int, int);
    int area() const;
};

#endif /* Header_h */