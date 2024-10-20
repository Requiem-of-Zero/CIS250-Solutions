#include <iostream>
using namespace std;

class myArrayClass {
private:
    int arraySize;
    int* ptrArray;

public:
    // Default constructor
    myArrayClass() : arraySize(0), ptrArray(NULL) {}

    // Parameterized constructor
    myArrayClass(int size) {
        if (size > 0) {
            arraySize = size;
            ptrArray = new int[arraySize];
        } else {
            arraySize = 0;
            ptrArray = NULL;
        }
    }

    // Destructor to free memory
    ~myArrayClass() {
        delete[] ptrArray;
    }

    // Function to set the size
    void setSize(int size) {
        if (size > 0 && ptrArray == NULL) {
            arraySize = size;
            ptrArray = new int[arraySize];
        } else {
            cout << "Invalid size or array already initialized." << endl;
        }
    }

    // Function to set all values in the array
    void setAllValues() {
        if (ptrArray != NULL) {
            for (int i = 0; i < arraySize; i++) {
                cout << "Enter value for index " << i << ": ";
                cin >> *(ptrArray + i);  // Using pointer arithmetic
            }
        } else {
            cout << "Array not initialized." << endl;
        }
    }

    // Function to print all values
    void printAll() const {
        if (ptrArray != NULL) {
            for (int i = 0; i < arraySize; i++) {
                cout << "Value at index " << i << ": " << *(ptrArray + i) << endl;
            }
        } else {
            cout << "Array not initialized." << endl;
        }
    }
};

// Main function to test the code
int main() {
    cout << "Name: Samuel Wong - Program Name: Pointer Arithmetic - Date: 10/20/2024" << endl;
    // Test default constructor
    myArrayClass Array1;
    Array1.setSize(7);
    Array1.setAllValues();
    cout << "All values for default constructor test: " << endl;
    Array1.printAll();

    // Test parameterized constructor
    myArrayClass Array2(7);
    Array2.setAllValues();
    cout << "All values for param constructor test: " << endl;
    Array2.printAll();

    // Test with dynamic allocation
    myArrayClass* ptrArray1 = new myArrayClass;
    ptrArray1->setSize(7);
    ptrArray1->setAllValues();
    cout << "All values for dynamic allocation test: " << endl;
    ptrArray1->printAll();
    delete ptrArray1;  // Clean up dynamically allocated memory

    return 0;
}
