#ifndef SQUARE_h
#define SQUARE_h
#include <iostream>

using namespace std;

class Square {
private:
  int width, height;
public:
  int getWidth() const;
  void setWidth(int);
  int getHeight() const;
  void setHeight(int);
  int getArea() const;
};

#endif /* SQUARE_h */