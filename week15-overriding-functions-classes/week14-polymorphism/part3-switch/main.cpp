#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
protected:
    string animalName;
    string sound;

public:
    virtual void animalSound() {
        cout << animalName << " says " << sound << endl;
    }

    virtual ~Animal() {}
};

// Derived class for Cat
class Cat : public Animal {
public:
    Cat() {
        animalName = "Cat";
        sound = "Meow";
    }
    void animalSound() override {
        cout << animalName << " says " << sound << endl;
    }
};

// Derived class for Dog
class Dog : public Animal {
public:
    Dog() {
        animalName = "Dog";
        sound = "Woof";
    }
    void animalSound() override {
        cout << animalName << " says " << sound << endl;
    }
};

// Derived class for Elephant
class Elephant : public Animal {
public:
    Elephant() {
        animalName = "Elephant";
        sound = "Trumpet";
    }
    void animalSound() override {
        cout << animalName << " says " << sound << endl;
    }
};

// Derived class for Mouse
class Mouse : public Animal {
public:
    Mouse() {
        animalName = "Mouse";
        sound = "Squeak";
    }
    void animalSound() override {
        cout << animalName << " says " << sound << endl;
    }
};

// Function to map user input to an integer code
int getAnimalCode(const string& animal) {
    if (animal == "Cat") return 1;
    if (animal == "Dog") return 2;
    if (animal == "Elephant") return 3;
    if (animal == "Mouse") return 4;
    return -1; // Invalid input
}

int main() {
    cout << "Name: Samuel Wong - Program Name: Part 3 Switch - Date: 11/17/2024" << endl;
    // Declare instances of each derived class
    Cat C1;
    Dog D1;
    Elephant E1;
    Mouse M1;

    // Prompt the user for an animal type
    string userChoice;
    cout << "Enter an animal (Cat, Dog, Elephant, Mouse): ";
    cin >> userChoice;

    // Convert the user input to an integer code
    int animalCode = getAnimalCode(userChoice);

    // Use a switch statement to print the appropriate animal sound
    switch (animalCode) {
        case 1:
            C1.animalSound();
            break;
        case 2:
            D1.animalSound();
            break;
        case 3:
            E1.animalSound();
            break;
        case 4:
            M1.animalSound();
            break;
        default:
            cout << "Invalid animal. Please choose from Cat, Dog, Elephant, or Mouse." << endl;
    }

    return 0;
}
