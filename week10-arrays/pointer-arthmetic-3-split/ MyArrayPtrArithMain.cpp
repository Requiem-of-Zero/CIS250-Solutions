#include "myArrayPtrArithTemp.cpp"

// Main function to test the code
int main() {
    cout << "Name: Samuel Wong - Program Name: Pointer Arithmetic 3 Split - Date: 10/20/2024" << endl;
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
