#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  cout << "Name: Samuel Wong - Program Name: Week 16 Prog 4 - Date: 12/1/2024" << endl;
  
  string firstLastPath = "/Users/sdubyoo/Documents/CIS-250/savedNames.txt";

  int numNames;
  cout << "How many first names would you like to input? ";
  cin >> numNames;
  
  if(numNames <= 0){
    cerr << "Error: The number of names must be greater than 0." << endl;
    return 1;
  }
  
  ofstream outputFile(firstLastPath);
  
  if(!outputFile){
    cerr << "Error opening the file." << endl;
    return 1;
  }
  
  string firstName;
  for(int i=1; i <= numNames; i++){
    cout << "Enter first name #" << i << ": ";
    cin >> firstName;
    
    outputFile << firstName << endl;
  }
  
  cout << numNames << " names have been saved to " << firstLastPath << endl;
  
  outputFile.close();
  
  return 0;
}
