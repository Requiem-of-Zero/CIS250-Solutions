#ifndef Header_h
#define Header_h
#pragma once
#include <iostream>
#include <string>
using namespace std;

class BuckysClass { 
  private:
    string name;
  public: 
    BuckysClass(): name("Bucky"){}
    string getName() const;
    void setName(string x);
};

#endif /* Header_h */
