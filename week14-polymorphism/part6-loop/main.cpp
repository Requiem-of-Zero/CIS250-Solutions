#include <iostream>
#include <string>
using namespace std;

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

int main() {
    Animal** ptrBaseAnimal = new Animal*[4];

    ptrBaseAnimal[0] = new Cat;
    ptrBaseAnimal[1] = new Dog;
    ptrBaseAnimal[2] = new Elephant;
    ptrBaseAnimal[3] = new Mouse;

    for (int i = 0; i < 4; i++) {
        ptrBaseAnimal[i]->animalSound();
    }

    for (int i = 0; i < 4; i++) {
        delete ptrBaseAnimal[i];
    }
    delete[] ptrBaseAnimal;

    return 0;
}
