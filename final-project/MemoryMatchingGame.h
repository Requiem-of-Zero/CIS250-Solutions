#ifndef MemoryMatchGame_h
#define MemoryMatchGame_h
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <fstream>
#include <iomanip>
using namespace std;

class MemoryMatchGame{
private:
  string theme50Words[50];
  string answerArray[8][8];
  string displayArray[8][8];
  string selectedTheme;
  int gridSize;
  int timeInterval;
  int totalMatches;
  int turnsTaken;
public:
  
  MemoryMatchGame(){
    totalMatches = 0;
    turnsTaken = 0;
  }
  
  void start(){
    selectTheme();
    selectLevel();
    clearConsole();
    populateGrid();
    displayGrid();
    playGame();
  }
  
  void selectTheme() {
    cout << "Select gameplay theme: \n1. Cars\n2. Flowers\n3. Pokemons\n";
    int choice;
    cin >> choice;
    switch(choice){
      case 1: selectedTheme = "Cars"; break;
      case 2: selectedTheme = "Flowers"; break;
      case 3: selectedTheme = "Pokemons"; break;
      default: selectedTheme = "Flowers";
    }
    loadThemeWords(selectedTheme);
  }
  
  void selectLevel(){
    cout << "Select difficulty level:\n1. Easy (4x4)\n2. Moderate (6x6)\n3. Difficult (8x8)\n";
    cin >> gridSize;
    switch(gridSize){
      case 1: gridSize = 4; break;
      case 2: gridSize = 6; break;
      case 3: gridSize = 8; break;
      default: cout << "Invalid level." << endl;
    }
  }
  
  void selectSpeed(){
    cout << "Select gameplay speed:\n1. Easy (6 sec)\n2. Moderate (4 sec)\n3. Difficult (2 sec)\n";
    int choice;
    cin >> choice;
    switch(choice){
      case 1: timeInterval = 6; break;
      case 2: timeInterval = 4; break;
      default: timeInterval = 2; break;
    }
  }
  
  void loadThemeWords(string theme){
    string carsFilePath = "/Users/sdubyoo/Documents/CIS-250/CIS250-Solutions/final-project/week12SamuelWongCars.txt";
    string flowersFilePath = "/Users/sdubyoo/Documents/CIS-250/CIS250-Solutions/final-project/week12SamuelWongFlowers.txt";
    string pokemonsFilePath = "/Users/sdubyoo/Documents/CIS-250/CIS250-Solutions/final-project/week12SamuelWongPokemons.txt";
    
    ifstream inputFile;
    string word;
    
    if(theme == "Cars"){
      inputFile.open(carsFilePath);
    } else if (theme == "Pokemons"){
      inputFile.open(pokemonsFilePath);
    } else {
      inputFile.open(flowersFilePath);
    }
    
    if (!inputFile) {
      cerr << "Error: Unable to open the file for theme: " << theme << endl;
      return;
    }

    int index = 0;
    while (getline(inputFile, word) && index < 50) {
      theme50Words[index++] = word;
    }

    inputFile.close();
  }
  
  void populateGrid() {
    int totalTerms;

    switch (gridSize) {
    case 4: totalTerms = 8; break;   // 4x4 grid, 8 terms (16 slots)
    case 6: totalTerms = 18; break;  // 6x6 grid, 18 terms (36 slots)
    case 8: totalTerms = 32; break;  // 8x8 grid, 32 terms (64 slots)
    default: totalTerms = 0; break;
    }

    for (int i = 0; i < gridSize; i++) {
      for (int j = 0; j < gridSize; j++) {
        answerArray[i][j] = "";
      }
    }

    srand(static_cast<unsigned int>(time(0)));

    string termPool[100];
    int index = 0;

    for (int i = 0; i < totalTerms; i++) {
      termPool[index++] = theme50Words[i % 50];
      termPool[index++] = theme50Words[i % 50];
    }

    for (int i = 0; i < totalTerms * 2; i++) {
      int randIndex = rand() % (totalTerms * 2);
      string temp = termPool[i];
      termPool[i] = termPool[randIndex];
      termPool[randIndex] = temp;
    }

    int placedTerms = 0;
    while (placedTerms < totalTerms * 2) {
      int row = rand() % gridSize;
      int col = rand() % gridSize;

      // If the spot is empty, place the term
      if (answerArray[row][col] == "") {
          answerArray[row][col] = termPool[placedTerms++];
      }
    }
      
    string cardPlaceholder = determineCard(selectedTheme);
      
    for (int i = 0; i < gridSize; i++) {
      for (int j = 0; j < gridSize; j++) {
          displayArray[i][j] = "[" + cardPlaceholder + "]";
      }
    }
  }

  void displayGrid() {
          
          cout << "     ";
          for (int col = 0; col < gridSize; col++) {
              cout << setw(4) << col << " ";
          }
          cout << endl;

          for (int row = 0; row < gridSize; row++) {
              cout << setw(3) << row << " ";

              for (int col = 0; col < gridSize; col++) {
                  cout << setw(4) << displayArray[row][col] << " ";
              }
              cout << endl;
          }
      }
  
  void playTurn(){
    int row1, col1, row2, col2;
    cout << "Select your first card (row col): ";
    cin >> row1 >> col1;
    cout << "Select your pair (row col): ";
    cin >> row2 >> col2;
    
    displayArray[row1][col1] = answerArray[row1][col1];
    displayArray[row2][col2] = answerArray[row2][col2];
    displayGrid();
    
    checkMatch(row1, col1, row2, col2);
    turnsTaken++;
  }
  
  void checkMatch(int row1, int col1, int row2, int col2) {
    if (answerArray[row1][col1] == answerArray[row2][col2]) {
        cout << "Nice Match!" << endl;
        totalMatches++;
    } else {
      string cardPlaceholder = determineCard(selectedTheme);
      delay();
      displayArray[row1][col1] = "[" + cardPlaceholder + "]"; // Reset face term
      displayArray[row2][col2] = "[" + cardPlaceholder + "]"; // Reset face term
      clearConsole();
      cout << "Sorry, try again." << endl;
      displayGrid();
    }
  }
  
  string determineCard(string theme){
    string cardPlaceholder;
    if(selectedTheme == "Pokemons"){
      cardPlaceholder = "P";
    } else if(selectedTheme == "Flowers"){
      cardPlaceholder = "F";
    } else {
      cardPlaceholder = "C";
    }
    return cardPlaceholder;
  }
  
  void delay(){
    this_thread::sleep_for(chrono::seconds(timeInterval));
  }
  
  void winGame(){
    if(totalMatches == (gridSize * gridSize)/2 ){
      cout << endl;
      cout << "Congrats! You win!" << endl;
    }
  }
  
  void clearConsole() {
      // system("clear") wasnn't working for my environment. To work around this, I printed 50 newlines.
      for (int i = 0; i < 50; i++) {
          cout << endl;
      }
  }
  
  void playGame(){
    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();
    while(totalMatches < (gridSize * gridSize) / 2){
      playTurn();
    }
    chrono::steady_clock::time_point endTime = chrono::steady_clock::now();
    chrono::duration<double> elapsedSeconds = endTime - startTime;
    winGame();
    cout << "Total Time: " << elapsedSeconds.count() << " seconds. " << "Turns taken: " << turnsTaken << endl;
  }
  
};

#endif /* MemoryMatchGame_h */
