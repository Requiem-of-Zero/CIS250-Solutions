#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {
       int answer = width * height;
       // complete this function so the code works
       return answer;
    }
};

void Rectangle::set_values (int x, int y) {
     // complete this function so the code works
  width = x;
  height = y;
}

int main () {  // Use this driver program
  cout << "Name: Samuel Wong - Program Name: Rectangle Area - Date: 9/8/2024" << endl;
  // Use set_values function to set values
  Rectangle rect1;
  rect1.set_values (5,6);
  cout << "Rectangle 1 area: " << rect1.area() << endl;
  // Use set_values function to set values
  Rectangle rect2;
  rect2.set_values (3,4);
  cout << "Rectangle 2 area: " << rect2.area() << endl; return 0;
}
