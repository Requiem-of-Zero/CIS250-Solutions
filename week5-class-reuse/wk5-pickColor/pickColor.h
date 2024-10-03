#ifndef Header_h
#define Header_h
#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <chrono>
using namespace std;

class PickColor { 
  private:
    string colors[7];
  public: 
    void setElement(int i, const string& color);
    void printColors() const;
    void pickRandomColor() const;
};

#endif /* Header_h */
