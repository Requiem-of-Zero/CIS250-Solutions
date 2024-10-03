#include <iostream>
using namespace std;

class Box { // declare class for box
  private:
    int width;  // declare private width variable for box objects
    int height; // declare private height variable for box objects
    int depth;  // declare private depth variable for box objects
  public:
    Box(): width(0), height(0), depth(0){}  // constructor to set default values for a box object
    void setWidth(int x){  // box width setter method
      width = x;
    }
    void setHeight(int y){  // box height setter method
      height = y;
    }
    void setDepth(int z){ // box depth setter method
      depth = z;
    }
    int getWidth() const {  // box width getter method
      return width;
    }
    int getHeight() const { // box height getter method
      return height;
    }
    int getDepth() const {  // box depth getter method
      return depth;
    }
    int calcVolume() const {  // method to calculate the volume of the box object
      if(height <= 0 || width <= 0 || depth <= 0){
        cout << "Error: All dimensions must be greater than 0. Exit code: " << endl;
        return 1;
      } else {
        return width * height * depth;
      }
    }
  
    int calcArea() const {  // method to calculate the area of the 6 sides of box object
      if(height <= 0 || width <= 0 || depth <= 0){
        cout << "Error: All dimensions must be greater than 0. Exit code: " << endl;
        return 1;
      } else {
        int area = 2 * ((depth * width) + (depth * height) + (width * height));
        return area;
      }
    }
};

int main () {  // Use this driver program
  cout << "Name: Samuel Wong - Program Name: Box Class - Date: 9/8/2024" << endl;
  // Use set_values function to set values
  // Box 1 - Test set functions, Volume, getHeight and area functions
  Box B1;    // HINT MAKE A Default constructor or set functions...

  B1.setWidth(2);

  B1.setHeight(3);

  B1.setDepth(4);

  cout << "B1 Height = " << B1.getHeight() << endl;

  cout << "B1 Area = " << B1.calcArea() << endl;

  cout << "B1 Volume = " << B1.calcVolume() << endl;

  // Box 2 - Test zero value error for calc Area and Volume of sides functions

  Box B2;

  B2.setWidth(3);

  B2.setHeight(4);

  cout << "B2 Depth = " << B2.getDepth() << endl;

  cout << "B2 Area = " << B2.calcArea() << endl;

  cout << "B2 Volume = " << B2.calcVolume() << endl;
}