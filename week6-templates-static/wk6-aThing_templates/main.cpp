#include "aThing.h"

int main () {
  cout << "Name: Samuel Wong - Program Name: aThing 3 - Date: 9/22/2024" << endl;
  
  // Implicit instantiation for int
  aThing<int> ThingOne;
  ThingOne.setWeight(110);
  cout << "Use int Function/Method getWeight - " << "Weight is: " << ThingOne.getWeight() << endl;

  // Implicit instantiation for double
  aThing<double> ThingTwo;
  ThingTwo.setWeight(72.5);
  cout << "Use double Function/Method getWeight - " << "Weight is: " << ThingTwo.getWeight() << endl;

  // Implicit instantiation for float
  aThing<float> ThingThree;
  ThingThree.setWeight(65.3f);
  cout << "Use float Function/Method getWeight - " << "Weight is: " << ThingThree.getWeight() << endl;

  // Implicit instantiation for long int
  aThing<long int> ThingFour;
  ThingFour.setWeight(123456789L);
  cout << "Use long int Function/Method getWeight - " << "Weight is: " << ThingFour.getWeight() << endl;

  return 0;
} // end of program