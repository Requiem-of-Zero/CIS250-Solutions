#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

int main() {
  cout << "Name: Samuel Wong - Program Name: Week 16 Prog 3 - Date: 12/1/2024" << endl;
  
  string firstLastPath = "/Users/sdubyoo/Documents/CIS-250/firstLastAge.txt";
  ifstream inputFile(firstLastPath);
  
  if(!inputFile){
    cerr << "Error opening the file." << endl;
    return 1;
  }
  
  string firstName, lastName;
  int age;
  
  string youngestFirst, youngestLast;
  int youngestAge = numeric_limits<int>::max();
  
  string oldestFirst, oldestLast;
  int oldestAge = numeric_limits<int>::min();
  
  while(inputFile >> firstName >> lastName >> age){
    if(age < youngestAge){
      youngestAge = age;
      youngestFirst = firstName;
      youngestLast = lastName;
    }
    if(age > oldestAge){
      oldestAge = age;
      oldestFirst = firstName;
      oldestLast = lastName;
    }
  }
  
  cout << "Youngest Person: " << youngestFirst << " " << youngestLast << ", Age: " << youngestAge << endl;
  cout << "Oldest Person: " << oldestFirst << " " << oldestLast << ", Age: " << oldestAge << endl;
  
  inputFile.close();
  
  return 0;
}
