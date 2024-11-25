#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Default constructor
    Complex() : real(0), imag(0) {}

    // Input method
    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real >> imag;
    }

    // Overload subtraction operator (-)
    Complex operator-(Complex c2) {
        Complex temp;
        temp.real = real - c2.real;
        temp.imag = imag - c2.imag;
        return temp;
    }

    // Overload addition operator (+)
    Complex operator+(Complex c2) {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }

    // Overload multiplication operator (*)
    Complex operator*(Complex c2) {
        Complex temp;
        temp.real = (real * c2.real) - (imag * c2.imag);
        temp.imag = (real * c2.imag) + (imag * c2.real);
        return temp;
    }

    // Overload division operator (/)
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

    // Overload postfix ++ operator
    Complex operator++(int) {
        Complex temp = *this; // Save the current state
        real++;               // Increment the real part
        return temp;          // Return the previous state
    }

    // Output method
    void output() {
        if (imag < 0)
            cout << real << imag << "i" << endl;
        else
            cout << real << "+" << imag << "i" << endl;
    }
};

int main() {
    Complex c1, result;

    cout << "Enter a complex number:\n";
    c1.input();

    cout << "\nUsing postfix ++ operator:\n";
    result = c1++;
    
    cout << "Value before increment (postfix result): ";
    result.output();
    cout << "Value after increment: ";
    c1.output();

    return 0;
}
