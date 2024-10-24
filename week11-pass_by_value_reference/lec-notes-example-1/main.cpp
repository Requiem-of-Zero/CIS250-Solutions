#include <iostream>
using namespace std;

// Pass by value
void byValueFun ( int inX )
{ cout << endl << endl;
cout << "Value of inX: " << inX << endl;
cout << "Address of inX " << &inX << endl;
}

// Pass by Reference method 1
void byRef1Fun ( int & inX )
{ cout << endl << endl;
cout << "Value of inX: " << inX << endl;
cout << "inX is the SAME Address of inX " << &inX << endl;
}

// Pass by Reference method 2
void byRef2Fun ( int * ptrInX ) // Uses pointer variables
{ cout << endl << endl;
cout << "Value *inX: " << *ptrInX << endl;
cout << "Address in inX: " << ptrInX << endl;
}

int main()
{
cout << "Name: Samuel Wong - Program Name: Pass by Value/Reference Ex 1 - Date: 10/27/2024" << endl;
int x = 42;
cout << "---------------------------------------------------------------------" << endl;
cout << endl << "Declared in main: Value of x: " << x << endl;
cout << "Declared in main: Address of x: " << &x << endl;
cout << "---------------------------------------------------------------------" << endl;
// Pass by value
cout << endl << "PASS by Value" << endl;
cout << "Value of variable x in main, COPIED to variable inX in function byValueFun" << endl;
byValueFun(x);
cout << "---------------------------------------------------------------------" << endl;
// Pass by Reference method 1
cout << endl << "PASS by Reference method 1" << endl;
cout << "The address of variable x in main, becomes the SAME address as inX in function byRef1Fun" << endl;
byRef1Fun(x);
cout << "---------------------------------------------------------------------" << endl;
// Pass by Reference method 2
cout << endl << "PASS by Reference method 2" << endl;
cout << "The address of variable x in main, copied to variable ptrInX in function byRef2Fun" << endl;
byRef2Fun(&x);
cout << "---------------------------------------------------------------------" << endl;
//system("pause");
return 0;
}