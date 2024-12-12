#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    // Overload function for square
    double area(double side) {
        return side * side;
    }

    // Overload function for circle
    float area(float radius) {
        return M_PI * radius * radius;
    }

    // Overload function for rectangle
    double area(double length, double width) {
        return length * width;
    }

    // Overload function for trapezoid
    double area(double base1, double base2, double height) {
        return 0.5 * (base1 + base2) * height;
    }

    // Overload function for cone (lateral surface area)
    int area(int r, int h) {
        return M_PI * r * (r + sqrt(h * h + r * r));
    }

    // Overload function for cube
    double area(double side, int) {  // Using int as dummy for overloading
        return 6 * side * side;
    }

    // Overload function for box (rectangular prism)
    float area(float length, float width, float height) {
        return 2 * (length * width + width * height + length * height);
    }

    // Overload function for sphere
    double area(double radius, int, int) {  // Using extra parameters to differentiate
        return 4 * M_PI * radius * radius;
    }
};

int main() {
    Shape shape;  // Create a Shape object
    int choice;
    cout << "Samuel Wong 12/10/2024" << endl;
    cout << "Select the shape to calculate area:" << endl;
    cout << "1. Square\n2. Circle\n3. Rectangle\n4. Trapezoid\n5. Cone\n6. Cube\n7. Box\n8. Sphere\n";
    cout << "Enter your choice (1-8): ";
    cin >> choice;

    switch (choice) {
        case 1: { // Square
            double side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            cout << "Area of the square: " << shape.area(side) << endl;
            break;
        }
        case 2: { // Circle
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle: " << shape.area(radius) << endl;
            break;
        }
        case 3: { // Rectangle
            double length, width;
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            cout << "Area of the rectangle: " << shape.area(length, width) << endl;
            break;
        }
        case 4: { // Trapezoid
            double base1, base2, height;
            cout << "Enter the lengths of the two bases and the height of the trapezoid: ";
            cin >> base1 >> base2 >> height;
            cout << "Area of the trapezoid: " << shape.area(base1, base2, height) << endl;
            break;
        }
        case 5: { // Cone
            double radius, height;
            cout << "Enter the radius and height of the cone: ";
            cin >> radius >> height;
            cout << "Surface area of the cone: " << shape.area(radius, height) << endl;
            break;
        }
        case 6: { // Cube
            double side;
            cout << "Enter the side length of the cube: ";
            cin >> side;
            cout << "Surface area of the cube: " << shape.area(side, 0) << endl;
            break;
        }
        case 7: { // Box (Rectangular Prism)
            double length, width, height;
            cout << "Enter the length, width, and height of the box: ";
            cin >> length >> width >> height;
            cout << "Surface area of the box: " << shape.area(length, width, height) << endl;
            break;
        }
        case 8: { // Sphere
            double radius;
            cout << "Enter the radius of the sphere: ";
            cin >> radius;
            cout << "Surface area of the sphere: " << shape.area(radius, 0, 0) << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}