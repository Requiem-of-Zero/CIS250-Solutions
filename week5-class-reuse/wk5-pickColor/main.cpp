#include "pickColor.h" //step 1

int main () {
  cout << "Name: Samuel Wong - Program Name: Pick Color Class 2 - Date: 9/15/2024" << endl;
  auto seed = chrono::steady_clock::now().time_since_epoch().count();
  srand(static_cast<unsigned int>(seed));
  PickColor colorPickerObject; //step 2
  
  colorPickerObject.setElement(0, "Red"); //step 3
  colorPickerObject.setElement(1, "Orange"); //step 3
  colorPickerObject.setElement(2, "Yellow"); //step 3
  colorPickerObject.setElement(3, "Green"); //step 3
  colorPickerObject.setElement(4, "Blue"); //step 3
  colorPickerObject.setElement(5, "Indigo"); //step 3
  colorPickerObject.setElement(6, "Violet"); //step 3
  
  cout << "All colors: ";
  colorPickerObject.printColors(); //step 3
  
  colorPickerObject.pickRandomColor(); //step 3
  
  return 0;
} // end of program