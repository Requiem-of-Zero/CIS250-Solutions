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

// Function that takes a pointer to the base class and uses polymorphism
void polyNoise(Animal* ptrBase) {
    ptrBase->animalSound();
}

int main() {
    cout << "Name: Samuel Wong - Program Name: Part 4 Function - Date: 11/17/2024" << endl;
    Cat C1;
    Dog D1;
    Elephant E1;
    Mouse M1;
    
    polyNoise(&C1);  
    polyNoise(&D1);  
    polyNoise(&E1);  
    polyNoise(&M1);  

    return 0;
}
