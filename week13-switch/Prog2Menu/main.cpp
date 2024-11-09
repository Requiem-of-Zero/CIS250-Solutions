#include <iostream>
using namespace std;

int main() {
    cout << "Name: Samuel Wong - Program Name: Switch Prog 2 Menu - Date: 11/10/2024" << endl;
    int choice;

    // Display the menu of options
    cout << "Menu Options:" << endl;
    cout << "1. Single player" << endl;
    cout << "2. Two player – You vs Computer" << endl;
    cout << "3. Two player – You vs Another Person" << endl;
    cout << "4. Multiplayer – Internet Connection – Real Persons" << endl;
    cout << "5. Exit" << endl;

    // Prompt the user to choose an option
    cout << "Enter the number corresponding to your choice: ";
    cin >> choice;

    // Check the user's choice and use a switch statement to handle it
    switch (choice) {
        case 1:
            cout << "You chose Single Player" << endl;
            break;
        case 2:
            cout << "You chose two Player VS Computer" << endl;
            break;
        case 3:
            cout << "You chose two Player VS Player" << endl;
            break;
        case 4:
            cout << "You chose Multiplayer" << endl;
            break;
        case 5:
            cout << "You chose to exit" << endl;
            break;
        default:
            cout << "You chose an invalid choice" << endl;
            break;
    }

    return 0;
}
