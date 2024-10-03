#include "Box.h"

int main () {
  cout << "Name: Samuel Wong - Program Name: Box 3 - Date: 9/22/2024" << endl;
  Box<int> intBox;
  intBox.setWidth(2);
  intBox.setHeight(3);
  intBox.setDepth(4);
  cout << "intBox Width = " << intBox.getWidth() << endl;
  cout << "intBox Area = " << intBox.calcArea() << endl;
  cout << "intBox Volume = " << intBox.calcVolume() << endl;
  
  Box<double> doubleBox;
  doubleBox.setWidth(2.5);
  doubleBox.setHeight(3.5);
  doubleBox.setDepth(4.5);
  cout << "doubleBox Height = " << doubleBox.getHeight() << endl;
  cout << "doubleBox Area = " << doubleBox.calcArea() << endl;
  cout << "doubleBox Volume = " << doubleBox.calcVolume() << endl;
  
  Box<float> floatBox;
  floatBox.setWidth(2.5513f);
  floatBox.setHeight(3.5512f);
  floatBox.setDepth(4.55123f);
  cout << "floatBox Depth = " << floatBox.getDepth() << endl;
  cout << "floatBox Area = " << floatBox.calcArea() << endl;
  cout << "floatBox Volume = " << floatBox.calcVolume() << endl;
  
  Box<long int> longBox;
  longBox.setWidth(123L);
  longBox.setHeight(456L);
  longBox.setDepth(789L);
  cout << "longBox Area = " << longBox.calcArea() << endl;
  cout << "longBox Volume = " << longBox.calcVolume() << endl;
  return 0;
} // end of program