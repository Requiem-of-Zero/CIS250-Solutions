#ifndef SALLY_h
#define SALLY_h
#include <iostream>

using namespace std;

class Sally {
public:
  int num;
  Sally();
  Sally(int);
  Sally operator+(Sally);
};
#endif
