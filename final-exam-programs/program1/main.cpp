#include <iostream> // Fixed: Uncommented the include syntax
using namespace std; // Fixed: Corrected standard to std

// Step 1a: Create BASE class
class polygon {
protected:
    int width, height;
public:
    void set_values(int inW, int inH) { // Fixed: Removed space for "inH"
        width = inW; height = inH;
    }

    virtual int getArea(){ // Fixed: Open parenthesis to open braces
        return 0; // Fixed: Removed the parenthesis
    }
};

// Step 1b: Create DERIVED class - rectangle
class rectangle : public polygon {
public:
    int getArea() override { return width * height; } // Fixed: Changed function to a override function to override the base class getArea()
};

// Step 1b: Create DERIVED class - triangle
class triangle : public polygon {
public:
    int getArea() override { return 0.5 * width * height; } // Fixed: Changed function to a override function and changed the formula to be the correct one for calculating area for a circle
};

// Create Poly function
void polyFun(polygon *ptrBase) {
    cout << ptrBase->getArea() << endl; // Fixed: Changed from dot notation to -> notation to dereference the pointer for its value
}

int main() {
    cout << "Samuel Wong 12/10/2024" << endl; // Fixed: Corrected console out statement

    // Step 2: Regular static declarations
    rectangle rect1;
    triangle trg1;

    // Step 3: Regular use with dot notation
    cout << "-----------" << endl; // Fixed: Changed 'end' to 'endl'
    rect1.set_values(3, 4); // Fixed: Changed rect to rect1
    cout << "Area of rectangle is: " << rect1.getArea() << endl; // Fixed: Corrected 'out' to 'cout'
    trg1.set_values(3, 5); // Fixed: Used 'trg1' correctly
    cout << "Area of triangle is: " << trg1.getArea() << endl; // Fixed: Corrected 'cout' and '>>' to '<<'
  


    rectangle *ptrRect = NULL;
    triangle *ptrTrg1 = NULL;
    polygon *pointerPoly = NULL;

    ptrRect = &rect1;
    ptrTrg1 = &trg1;

    // Polymorphism - One set of code that can work for many derived classes
    cout << "-----------" << endl; // Fixed: Changed "<>" to '<<'
    cout << "Area of rectangle is: ";
    polyFun(ptrRect); // Fixed: Used the pointer variable created above
    cout << "Area of triangle is: ";
    polyFun(ptrTrg1); // Fixed: Used the pointer variable created above
    cout << "-----------" << endl; // Fixed: Corrected the missing closing quotations and changed "endline" to "endl"

    /*
     Test Cases:
     Rect Testcases: [[5,5],[10,10],[20,20]]
     Rect Results: [25, 100, 400]
     
     Triangle Testcases: [[6,9],[5,4],[10,5]]
     Triangle Results: [27, 10, 25]
     */
  
    cout << "-----------" << endl;
    cout << "Test Cases:" << endl;
    rect1.set_values(5, 5);
    cout << "Area of rectangle is: " << endl;
    polyFun(ptrRect);
    rect1.set_values(10, 10);
    cout << "Area of rectangle is: " << endl;
    polyFun(ptrRect);
    rect1.set_values(20, 20);
    cout << "Area of rectangle is: " << endl;
    polyFun(ptrRect);
    trg1.set_values(6, 9);
    cout << "Area of triangle is: " << endl;
    polyFun(ptrTrg1);
    trg1.set_values(5, 4);
    cout << "Area of triangle is: " << endl;
    polyFun(ptrTrg1);
    trg1.set_values(10,5);
    cout << "Area of triangle is: " << endl;
    polyFun(ptrTrg1);
    cout << "-----------" << endl;
  
//    system("pause"); Commented out since i am on iOS
    return 0;
}
