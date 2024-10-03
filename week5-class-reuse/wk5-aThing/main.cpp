#include "aThing.h" //step 1

int main () {
  // STEP 2 - DECLARATION - USE the new datatype/class 'aThing' in a Declaration statement to create 'ThingOne'.
      cout << "Name: Samuel Wong - Program Name: aThing 2 - Date: 9/15/2024" << endl;
      aThing ThingOne; //step 2

      // STEP 3 - Use the OBJECT defined in step 2 - With dot notation

      ThingOne.setWeight(110); //step 3

      cout << "Use Function/Method get Weight - "<< "Weight is: " << ThingOne.getWeight() << endl; //step 3

  //    system("PAUSE");   MAC User comment this line out.

      return 0;
} // end of program