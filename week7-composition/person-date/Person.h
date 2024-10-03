#ifndef Person_h
#define Person_h
#include "Date.h"
#include <string>
#pragma once

class Person{
private:
  string firstName, lastName;
  Date dateOfBirth;
public:
  string getFirstName() const { return firstName; }
  string getLastName() const { return lastName; }
  int getBirthMonth() { return dateOfBirth.getMonth(); }
  int getBirthDay() { return dateOfBirth.getDay(); }
  int getBirthYear() { return dateOfBirth.getYear(); }
  void setFirstName(string inFirst) {firstName = inFirst;}
  void setLastName(string inLast) {lastName = inLast;}
  void setBirthMonth(int m) {dateOfBirth.setMonth(m);}
  void setBirthDay(int d) {dateOfBirth.setDay(d);}
  void setBirthYear(int y) {dateOfBirth.setYear(y);}
  
  Person(): firstName("None"), lastName("None"), dateOfBirth(1,1,1900){}
  Person(string inFirst, string inLast, Date dateObj): firstName(inFirst), lastName(inLast), dateOfBirth(dateObj){}
};

#endif /* Person_h */
