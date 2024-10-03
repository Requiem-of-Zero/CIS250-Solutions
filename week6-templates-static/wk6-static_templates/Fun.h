#ifndef Header_h
#define Header_h
#pragma once
#include <iostream>

using namespace std;


class Fun {
  private:
    static int count;
  public:
    Fun(){count++;}
    int getCount() const {return count;}
};

#endif /* Header_h */
