#include <iostream>
using namespace std;

int main() {
    cout << "Name: Samuel Wong - Program Name: Switch Prog 1 Range - Date: 11/10/2024" << endl;
    int number;

    // Prompt the user to enter a number between 0 and 10
    cout << "Enter a number between 0 and 10: ";
    cin >> number;

    // Check if the input is within the correct range
    if (number < 0 || number > 10) {
        cout << "Invalid input! Please enter a number between 0 and 10." << endl;
        return 1;  // Exit the program if input is out of range
    }

    // --- Using if statements ---
    cout << "You entered (if statements): ";
    if (number == 0) cout << "ZERO";
    else if (number == 1) cout << "ONE";
    else if (number == 2) cout << "TWO";
    else if (number == 3) cout << "THREE";
    else if (number == 4) cout << "FOUR";
    else if (number == 5) cout << "FIVE";
    else if (number == 6) cout << "SIX";
    else if (number == 7) cout << "SEVEN";
    else if (number == 8) cout << "EIGHT";
    else if (number == 9) cout << "NINE";
    else if (number == 10) cout << "TEN";
    cout << endl;

    // --- Using a switch statement ---
    cout << "You entered (switch statement): ";
    switch (number) {
        case 0: cout << "ZERO"; break;
        case 1: cout << "ONE"; break;
        case 2: cout << "TWO"; break;
        case 3: cout << "THREE"; break;
        case 4: cout << "FOUR"; break;
        case 5: cout << "FIVE"; break;
        case 6: cout << "SIX"; break;
        case 7: cout << "SEVEN"; break;
        case 8: cout << "EIGHT"; break;
        case 9: cout << "NINE"; break;
        case 10: cout << "TEN"; break;
        default: cout << "Invalid input";  // This case should not be triggered due to prior range check
    }
    cout << endl;

    return 0;
}