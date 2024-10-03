#include <iostream>
#include "Person.h"
#include "Date.h"
using namespace std;

int main () {
  cout << "Name: Samuel Wong - Program Name: Person Date Composition - Date: 9/29/2024" << endl;
  
  Person Person1;
  
  cout << "Person 1 full name: " << Person1.getFirstName() << " " << Person1.getLastName() << " - birthdate: " << Person1.getBirthMonth() << "/" << Person1.getBirthDay() << "/" << Person1.getBirthYear() << endl;
  
  Person Person2("Jena", "Neuclue", Date(01,21,2001));
  // Print default constructor person...values defaulted

  cout << "Person 1 - First name: " << Person1.getFirstName() << endl;

  cout << "Person 1 - Last name: " << Person1.getLastName() << endl;

  cout << "Person 1 - Birth Date: " << Person1.getBirthMonth() << " / " << Person1.getBirthDay() << " / " << Person1.getBirthYear() << endl;

 // Change default constructor person values

  Person1.setFirstName(" Your Name ");

  Person1.setLastName(" Your last Name");

  Person1.setBirthMonth(01);

  Person1.setBirthDay(42);

  Person1.setBirthYear(2001);

  // Print out new values for the Default constructor person

  cout << "Person 1 - First name: " << Person1.getFirstName() << endl;

  cout << "Person 1 - Last name: " << Person1.getLastName() << endl;

  cout << "Person 1 - Birth Date: " << Person1.getBirthMonth() << " / " << Person1.getBirthDay() << " / " << Person1.getBirthYear() << endl;

// Print out values in parameterize person2

  cout << "Person 2 - First name: " << Person2.getFirstName() << endl;

  cout << "Person 2 - Last name: " << Person2.getLastName() << endl;

  cout << "Person 2 - Birth Date: " << Person2.getBirthMonth() << " / " << Person2.getBirthDay() << " / " << Person2.getBirthYear() << endl;
  return 0;
} // end of program