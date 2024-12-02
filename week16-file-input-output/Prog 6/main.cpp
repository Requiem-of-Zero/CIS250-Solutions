#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int NUM_RECORDS = 10;

bool compareByLastName(const string lastName1, const string lastName2){
  return lastName1 > lastName2;
}

int main() {
  cout << "Name: Samuel Wong - Program Name: Week 16 Prog 6 - Date: 12/1/2024" << endl;
  string inputFilePath = "/Users/sdubyoo/Documents/CIS-250/records.txt", outputFilePath = "/Users/sdubyoo/Documents/CIS-250/sortedRecords.txt";
  string lastNames[NUM_RECORDS], firstNames[NUM_RECORDS], cities[NUM_RECORDS], states[NUM_RECORDS], zips[NUM_RECORDS];
  
  ifstream inputFile(inputFilePath);
  
  if(!inputFile){
    cerr << "Error, unable to open file" << endl;
    return 1;
  }
  
  for(int i=0; i<NUM_RECORDS; i++){
    inputFile >> lastNames[i] >> firstNames[i] >> cities[i] >> states[i] >> zips[i];
  }
  
  inputFile.close();
  
  for(int i=0; i < NUM_RECORDS - 1; i++){
    for(int j=i+1; j < NUM_RECORDS; j++){
      if(compareByLastName(lastNames[i], lastNames[j])){
        swap(lastNames[i], lastNames[j]);
        swap(firstNames[i], firstNames[j]);
        swap(cities[i], cities[j]);
        swap(states[i], states[j]);
        swap(zips[i], zips[j]);
      }
    }
  }
  
  ofstream outputFile(outputFilePath);
  
  if(!outputFile){
    cerr << "Error, unable to open file" << endl;
    return 1;
  }
  
  for(int i=0; i < NUM_RECORDS; i++){
    outputFile << lastNames[i] << " " << firstNames[i] << " " << cities[i] << " " << states[i] << " " << zips[i] << endl;
  }
  
  outputFile.close();
  
  cout << "Records have been sorted and written to the output path: " << outputFilePath << endl;
  
  return 0;
}
