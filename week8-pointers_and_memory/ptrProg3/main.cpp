#include "Person.h"
#include <iostream>

using namespace std;

int main(){
  cout << "Name: Samuel Wong - Program Name: Ptr Prog 3 - Date: 10/6/2024" << endl;
  Person P1;
  Person P2("Alex", "Wong", "AWong", 1996);
  Person *ptrPerson1 = &P1;
  Person *ptrPerson2 = &P2;
  
  cout << "Person 1 getters before setters name: " << ptrPerson1 -> getFirstName() << " " << ptrPerson1 -> getLastName() << " Nickname: " << ptrPerson1 -> getNickName() << " Year of Birth: " << ptrPerson1 -> getYearOfBirth() << endl;
  cout << "Set first name to Samuel" << endl;
  ptrPerson1 -> setFirstName("Samuel");
  cout << "Set last name to Girl" << endl;
  ptrPerson1 -> setLastName("Girl");
  cout << "Set nickname to BruhGirl" << endl;
  ptrPerson1 -> setNickName("BruhGirl");
  cout << "Set year of birth to 1993" << endl;
  ptrPerson1 -> setYearOfBirth(1993);
  cout << "Person 1 getters after setters name: " << ptrPerson1 -> getFirstName() << " " << ptrPerson1 -> getLastName() << " Nickname: " << ptrPerson1 -> getNickName() << " Year of Birth: " << ptrPerson1 -> getYearOfBirth() << endl;
  cout << endl;
  cout << "Person 2 getters before setters name: " << ptrPerson2 -> getFirstName() << " " << ptrPerson2 -> getLastName() << " Nickname: " << ptrPerson2 -> getNickName() << " Year of Birth: " << ptrPerson2 -> getYearOfBirth() << endl;
  cout << "Set first name to Alexander" << endl;
  ptrPerson2 -> setFirstName("Alexander");
  cout << "Set last name to Girly" << endl;
  ptrPerson2 -> setLastName("Girly");
  cout << "Set nickname to GirlyAlexa" << endl;
  ptrPerson2 -> setNickName("GirlyAlexa");
  cout << "Set year of birth to 1993" << endl;
  ptrPerson2 -> setYearOfBirth(1993);
  cout << "Person 2 getters after setters name: " << ptrPerson2 -> getFirstName() << " " << ptrPerson2 -> getLastName() << " Nickname: " << ptrPerson2 -> getNickName() << " Year of Birth: " << ptrPerson2 -> getYearOfBirth() << endl;
}
