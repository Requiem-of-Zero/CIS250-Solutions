#include <iostream>
#include <cstdlib>  // library for srand() and rand()
#include <ctime>  // library for time() but didn't work
#include <string> // library for string datatype and methods
p // library for srand() synchronization seed

using namespace std;

class PickColor{
  private:
    string colors[7]; // private string array of 7 strings
  
  public:
    void setElement(int i, const string& color){ // setElement public function that allows user to assign string values to the colors array of the object instance
      if(i >= 0 && i < 7){
        colors[i] = color;
      } else {
        cout << "Index out of bounds" << endl;
      }
    }
    
    void printColors() const { // printColors public function to print all the current colors in the array for the object instance
      for(int i=0; i < sizeof(colors)/sizeof(*colors); i++){
        cout << colors[i] << " ";
      }
      cout << endl;
    }
  
  void pickRandomColor() const {  // pickRandomColor public function to choose a color from the colors array at a random index
    int randomIdx = rand() % 7;
    cout << "Randomly picked color: " << colors[randomIdx] << endl;
  }
};

int main(){
  cout << "Name: Samuel Wong - Program Name: Pick Color Class - Date: 9/8/2024" << endl;
  auto seed = chrono::steady_clock::now().time_since_epoch().count();
  srand(static_cast<unsigned int>(seed));
  PickColor colorPickerObject;
  
  colorPickerObject.setElement(0, "Red");
  colorPickerObject.setElement(1, "Orange");
  colorPickerObject.setElement(2, "Yellow");
  colorPickerObject.setElement(3, "Green");
  colorPickerObject.setElement(4, "Blue");
  colorPickerObject.setElement(5, "Indigo");
  colorPickerObject.setElement(6, "Violet");
  
  cout << "All colors: ";
  colorPickerObject.printColors();
  
  colorPickerObject.pickRandomColor();
  
  return 0;
}