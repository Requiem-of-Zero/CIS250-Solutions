#include <iostream>
using namespace std;
template <class T>
class myArrayClass {
private:
    int arraySize;
    T* ptrArray;

public:
    // Default constructor
    myArrayClass() : arraySize(0), ptrArray(NULL) {}

    // Parameterized constructor
    myArrayClass(int size) {
        if (size > 0) {
            arraySize = size;
            ptrArray = new T[arraySize];
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
            ptrArray = new T[arraySize];
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


int main() {
    cout << "Name: Samuel Wong - Program Name: Pointer Arithmetic 2 - Date: 10/20/2024" << endl;
    // Test with int
    myArrayClass<int> Array1;
    Array1.setSize(7);
    Array1.setAllValues();
    cout << "All values for int test: " << endl;
    Array1.printAll();

    // Test with double
    myArrayClass<double> Array2(7);
    Array2.setAllValues();
    cout << "All values for double test: " << endl;
    Array2.printAll();

    // Test with long int
    myArrayClass<long int> Array3(7);
    Array3.setAllValues();
    cout << "All values for long test: " << endl;
    Array3.printAll();

    return 0;
}
