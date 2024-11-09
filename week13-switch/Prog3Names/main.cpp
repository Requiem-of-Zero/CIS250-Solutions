#include <iostream>
#include <string>
using namespace std;
int main()
{
string firstName = "None";
cout << "Enter your first name: ";
cin >> firstName;
  
switch(firstName){
  case "Tuyet": // if switch is true, break
    cout << "Hi Tuyet" << endl;
    break;
  case "Carlos": // if switch is true, break
    cout << "Hello Carlos" << endl;
    break;
  case "Joe": // if switch is true, break
    cout << "Yo Joe" << endl;
    break;
  default: // default – other names
    cout << "How U doing" << firstName << endl;
}
  system("PAUSE");
return 0;
}