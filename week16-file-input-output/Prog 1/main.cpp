#include <iostream>
#include <fstream>
using namespace std;

int main() {
  cout << "Name: Samuel Wong - Program Name: Week 16 Prog 2 - Date: 12/1/2024" << endl;

  ofstream outputFile("/Users/sdubyoo/Documents/CIS-250/tenNumbers1to10.txt");
  
  if(!outputFile){
    cerr << "Error opening the file." << endl;
    return 1;
  }
  
  for(int i=1; i<= 10; i++){
    outputFile << i << endl;
  }
  
  outputFile.close();
  
  cout << "Numbers 1 to 10 have been written to 'tenNumbers1to10.txt'." << endl;
  return 0;
}
