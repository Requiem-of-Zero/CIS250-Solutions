#ifndef Person_h
#define Person_h
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
  string firstName, lastName, nickName;
  int yearOfBirth;
public:
  string getFirstName() const { return firstName; }
  
  string getLastName() const { return lastName; }
  
  string getNickName() const { return nickName; }
  
  int getYearOfBirth() const { return yearOfBirth;}
  
  void setFirstName(string inFirstName){ firstName = inFirstName; }
  
  void setLastName(string inLastName){ lastName = inLastName; }
  
  void setNickName(string inNickName){ nickName = inNickName; }
  
  void setYearOfBirth(int birthYear){ yearOfBirth = birthYear; }
  
  Person(): firstName("Sam"), lastName("Wong"), nickName("sdub"), yearOfBirth(1996){}
  Person(string inFirstName, string inLastName, string inNickName, int birthYear): firstName(inFirstName), lastName(inLastName), nickName(inNickName), yearOfBirth(birthYear){}
};

#endif /* Person_h */
