#include <iostream>
#include <string>
using namespace std;

class BuckysClass { // declaring class
  public:
    void setName(string x){
      name = x;
    };
  string getName(){
    return name;
  };
  private:
    string name;
};

int main () {
  cout << "Name: Samuel Wong - Program Name: Bucky2 - Date: 9/8/2024" << endl;
  BuckysClass bo;
  bo.setName("Sir Bucky Wallace");
  cout << bo.getName() << endl;
  return 0;
} // end of program