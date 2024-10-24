#include <string>
#include <iostream>
using namespace std;

void fun1( void ) { cout << " Void input, no return " << endl ; }
void fun2( int x = 1 ) { cout << " x = " << x << endl ; }
void fun3( int x = 12, double d = 34.5, string s = "Default word" ) {
cout << " x = " << x << endl ;
cout << " d = " << d << endl ;
cout << " s = " << s << endl ;
}
int main( )
{
cout << "Name: Samuel Wong - Program Name: Pass by Value/Reference Ex 2 - Date: 10/27/2024" << endl;
cout << "==========" << endl;
fun1(); // no defaults - no inputs defined
cout << "==========" << endl;
fun2(); // one default - used
cout << "==========" << endl;
fun2(42); // User Parm Input
cout << "==========" << endl;
// Default parameters loaded from right to left, No gaps or skips...
fun3(); // there defaults - all defaults used - no user input
cout << "==========" << endl;
fun3(42); // three defaults - first two defaults used, last USER Parm Input
cout << "==========" << endl;
fun3(42, 6.9); // three defaults - first default used, last two USER parms input
cout << "==========" << endl;
fun3(42, 6.9, "user input value"); // three defaults - all three USER parms inputted
cout << "==========" << endl;
//system("pause");
return 0;
}