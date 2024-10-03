#include "Circle.h"

void Circle::setRadius(double r){
  if(r > 0){
    radius = r;
  } else {
    cout << "Error: Radius must be greater than 0." << endl;
  }
}

void Circle::printRadius() const {
  if(radius > 0){
    cout << "Radius: " << radius << endl;
  } else {
    cout << "Error: Radius must be greater than 0.";
  }
}

double Circle::getRadius() const {
  return radius;
}

double Circle::calcCircumference() const {
  if(radius > 0){
    return 2 * M_PI * radius;
  } else {
    cout << "Error: Radius must be greater than 0 to calculate circumference. Error code: " << endl;
    return 1;
  }
}

double Circle::calcArea() const {
  if (radius > 0) {
      return M_PI * radius * radius;
  } else {
      cout << "Error: Radius must be greater than 0 to calculate area. Error code: " << endl;
      return 1;
  }
}

double Circle::calcDiameter() const {
  if(radius > 0){
    return 2 * radius;
  } else {
    cout << "Error: Radius must be greater than 0 to calculate diameter. Error code: " << endl;
    return 1;
  }
}
