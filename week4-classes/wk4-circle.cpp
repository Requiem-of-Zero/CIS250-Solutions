#include <iostream>
#include <cmath>  // library for the M_PI variable

using namespace std;

class Circle {  // declare circle class
  private:
    double radius;  // declare private radius double datatype for circle objects
  public:
    Circle(): radius(1){} // constructor to instantiate new circle objects with the default radius of 1
    double getRadius() const {  // getter method to get the radius of a circle object
      return radius;
    }
    
    void setRadius(double r){ // setter method to set the radius of a circle object
      if(r > 0){
        radius = r;
      } else {
        cout << "Error: Radius must be greater than 0." << endl;
      }
    }
    
    double calcCircumference() const {  // function to calculate the circumference of a circle object instance
      if(radius > 0){
        return 2 * M_PI * radius;
      } else {
        cout << "Error: Radius must be greater than 0 to calculate circumference. Error code: " << endl;
        return 1;
      }
    }
  
    double calcArea() const { // function to calculate the area of a circle object instance
      if (radius > 0) {
          return M_PI * radius * radius;
      } else {
          cout << "Error: Radius must be greater than 0 to calculate area. Error code: " << endl;
          return 1;
      }
    }
  
    double calcDiameter() const { // function to calculate the area of a circle object instance
      if(radius > 0){
        return 2 * radius;
      } else {
        cout << "Error: Radius must be greater than 0 to calculate diameter. Error code: " << endl;
        return 1;
      }
    }
  
    void printRadius() const {  // function to print the radius of a circle object instance
      if(radius > 0){
        cout << "Radius: " << radius << endl;
      } else {
        cout << "Error: Radius must be greater than 0.";
      }
    }
};

int main () {
  cout << "Name: Samuel Wong - Program Name: Circle Class - Date: 9/8/2024" << endl;
  Circle myCircle;

  // Set radius
  myCircle.setRadius(5);

  // Print radius
  myCircle.printRadius();

  // Calculate and print circumference
  cout << "Circumference: " << myCircle.calcCircumference() << endl;

  // Calculate and print area
  cout << "Area: " << myCircle.calcArea() << endl;

  // Calculate and print diameter
  cout << "Diameter: " << myCircle.calcDiameter() << endl;

  return 0;
}