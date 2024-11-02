#ifndef TRIANGLE_h
#define TRIANGLE_h
#include <iostream>
using namespace std;

class Triangle {
public:
//  Default constructor
  Triangle();
  
//  Overload constructor
  Triangle(int);
  
//  Accesor/Getter Function
  int getHeight() const;
    //  getHeight - returns height of triangle
    //  @return int - height of triangle
  
//  Mutator/Setter Function
  void setHeight(int);
    //  setHeight - sets height of triangle
    //  @param int - height of triangle
//  Destructor
  ~Triangle();
  
//  getArea
  double getArea(int) const;
    // getArea - returns area of triangle
    // @param int - base of triangle
    // @return double - area of triangle
private:
  //Member variables
  int height;
};

#endif /* TRIANGLE_h */
