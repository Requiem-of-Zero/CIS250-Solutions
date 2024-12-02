#include <iostream>
#include <fstream>
#include <limits>
#include <string>

using namespace std;

int main() {
  cout << "Name: Samuel Wong - Program Name: Week 16 Prog 5 - Date: 12/1/2024" << endl;
  const int numScores = 10;
  int arrayTestScores[numScores];
  
  string filePath = "/Users/sdubyoo/Documents/CIS-250/savedTestScores.txt";

  ofstream outputFile(filePath);
  
  if(!outputFile){
    cerr << "Error opening file. " << endl;
    return 1;
  }
  
  int score;
  for(int i=0; i < numScores; i++){
    do{
      cout << "Enter test score #" << (i + 1) << " (0-100): ";
      cin >> score;
      
      if(score < 0 || score > 100){
        cout << "Invalid input. Please enter a score between 0 and 100." << endl;
      }
    } while (score < 0 || score > 100);
    outputFile << score << endl;
    arrayTestScores[i] = score;
  }
  
  outputFile.close();
  
  int minScore = numeric_limits<int>::max();
  int maxScore = numeric_limits<int>::min();
  int sumScores = 0;
  
  for(int i=0; i < numScores; i++){
    if(arrayTestScores[i] < minScore){
      minScore = arrayTestScores[i];
    }
    if(arrayTestScores[i] > maxScore){
      maxScore = arrayTestScores[i];
    }
    sumScores += arrayTestScores[i];
  }
  
  double avgScore = static_cast<double>(sumScores)/numScores;
  
  cout << "Min Score: " << minScore << endl;
  cout << "Max Score: " << maxScore << endl;
  cout << "Average Score: " << avgScore << endl;
  
  return 0;
}