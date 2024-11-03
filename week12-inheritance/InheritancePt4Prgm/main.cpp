#include <iostream>
using namespace std;

class base    //single base class
{
   public:
     int x;
     void getdata(){
       cout << "Enter the value of x = "; cin >> x;
     }
 };

class derive : public base    //single derived class
{
   private:
    int y;
   public:
     void readdata(){
       cout << "Enter the value of y = "; cin >> y;
     }
   void product()
   {
     cout << "Product = " << x * y << endl;
   }
 };
 
 int main()
 {
    cout << "Name: Samuel Wong - Program Name: Inheritance Part 4 Program - Date: 11/3/2024" << endl;
    derive a;     //object of derived class
    a.getdata();
    a.readdata();
    a.product();
    return 0;
 }         //end of program