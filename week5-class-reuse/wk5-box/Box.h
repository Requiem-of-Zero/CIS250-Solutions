#ifndef Header_h
#define Header_h
#pragma once
#include <iostream>

using namespace std;

class Box { 
  private:
    int width, height, depth;
  public: 
    Box(): width(2), height(2), depth(2){}
    void setWidth(int);
    void setHeight(int);
    void setDepth(int);
    int getWidth() const;
    int getHeight() const;
    int getDepth() const;
    int calcVolume() const;
    int calcArea() const;
};

#endif /* Header_h */