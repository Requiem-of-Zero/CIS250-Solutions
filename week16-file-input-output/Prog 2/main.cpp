#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  cout << "Name: Samuel Wong - Program Name: Week 16 Prog 2 - Date: 12/1/2024" << endl;

  ifstream inputFile("/Users/sdubyoo/Documents/CIS-250/firstLastAge.txt");
  
  if(!inputFile){
    cerr << "Error opening the file." << endl;
    return 1;
  }
  
  string firstName, lastName;
  int age;
  
  while(inputFile >> firstName >> lastName >> age){
    cout << "First Name: " << firstName << ", Last Name: " << lastName << ", Age: " << age << endl;
  }
  
  inputFile.close();
  
  return 0;
}
