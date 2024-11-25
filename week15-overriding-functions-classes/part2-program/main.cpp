#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;
public:
    Complex() : real(0), imag(0) { }

    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real >> imag;
    }

    // Overload subtraction operator
    Complex operator-(Complex c2) {
        Complex temp;
        temp.real = real - c2.real;
        temp.imag = imag - c2.imag;
        return temp;
    }

    // Overload addition operator
    Complex operator+(Complex c2) {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }

    // Overload multiplication operator
    Complex operator*(Complex c2) {
        Complex temp;
        temp.real = (real * c2.real) - (imag * c2.imag);
        temp.imag = (real * c2.imag) + (imag * c2.real);
        return temp;
    }

    // Overload division operator
    Complex operator/(Complex c2) {
        Complex temp;
        float denominator = (c2.real * c2.real) + (c2.imag * c2.imag);
        if (denominator == 0) {
            cout << "Error: Division by zero" << endl;
            exit(1); // Exit program if denominator is zero
        }
        temp.real = ((real * c2.real) + (imag * c2.imag)) / denominator;
        temp.imag = ((imag * c2.real) - (real * c2.imag)) / denominator;
        return temp;
    }

    void output() {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag  << "i";
    }
};

int main() {
  cout << "Name: Samuel Wong - Program Name: Part 2 Program - Date: 11/24/2024" << endl;
    Complex c1, c2, result;
    
    cout << "Enter first complex number:\n";
    c1.input();
    
    cout << "Enter second complex number:\n";
    c2.input();

    // Test subtraction
    result = c1 - c2;
    cout << "\nSubtraction result: ";
    result.output();

    // Test addition
    result = c1 + c2;
    cout << "\nAddition result: ";
    result.output();

    // Test multiplication
    result = c1 * c2;
    cout << "\nMultiplication result: ";
    result.output();

    // Test division
    result = c1 / c2;
    cout << "\nDivision result: ";
    result.output();

    return 0;
}
