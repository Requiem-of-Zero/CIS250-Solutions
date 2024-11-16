#include <iostream>
using namespace std;

int main(){
  cout << "Name: Samuel Wong - Program Name: Switch Prog 4 Price - Date: 11/10/2024" << endl;
  
  int age = 0;
  cout << "Enter age to see ticket price: ";
  cin >> age;
  
  while (!(cin >> age)) {
    // If input fails (not an integer), clear the error flag and discard invalid input
    cin.clear();  // Clear the error flag
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore the invalid input

    cout << "Invalid input. Please enter a valid integer age: ";
  }
  
  int ageBracket;
  if (age <= 5){
//    cout << "$0.00" << endl << endl;
    ageBracket = 0;
  } else if (age >= 6 && age <= 12){
    ageBracket = 1;
//    cout << "$10.00" << endl;
  } else if (age >= 13 && age <= 26) {
    ageBracket = 2;
//    cout << "$18.00" << endl;
  } else {
    ageBracket = 3;
//    cout << "$15.00" << endl;
  }
  
  switch(ageBracket){
    case 0:
      cout << "$0.00" << endl << endl;
      break;
    case 1:
      cout << "$10.00" << endl;
      break;
    case 2:
      cout << "$18.00" << endl;
      break;
    case 3:
      cout << "$15.00" << endl;
      break;
    default:
      cout << "Invalid age." << endl;
      break;
  }
//system("PAUSE"); // PC only
  return 0;
}