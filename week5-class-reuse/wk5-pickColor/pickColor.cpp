#include "pickColor.h"

void PickColor::setElement(int i, const string& color){
  if(i >= 0 && i < 7){
    colors[i] = color;
  } else {
    cout << "Index out of bounds" << endl;
  }
}

void PickColor::printColors() const {
  for(int i=0; i < sizeof(colors)/sizeof(*colors); i++){
    cout << colors[i] << " ";
  }
  cout << endl;
}

void PickColor::pickRandomColor() const {
  int randIdx = rand() % 7;
  cout << "Randomly picked color: " << colors[randIdx] << endl;
}