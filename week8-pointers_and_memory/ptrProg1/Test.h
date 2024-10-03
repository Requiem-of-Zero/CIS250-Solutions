#ifndef Test_h
#define Test_h
#include <iostream>
#include <string>
#pragma once

using namespace std;

class Test {
private:
public:
  void testNullPtr(){
    int *ptrInt = NULL;
//    *ptrInt = 42; dereferencing a NULL pointer causes the program to crash since there's no memory address saved on the pointer
  }
  
  void memoryLeak(){
    double *ptrDouble = new double;
    *ptrDouble = 3.123456789;
    
/*
    delete ptrDouble; memory has to be freed in order to avoid a memory leak since it will increase the program's memory usage
    ptrDouble = NULL;
 */
  }
  
  string *deletePointer(){
    string *ptrString = new string;
    *ptrString = "Carlos";
    return ptrString;
  }
  
  void testTwoAlias(){
    int *ptrAlias1 = new int;
    *ptrAlias1 = 42;
    int *ptrAlias2 = ptrAlias1;
    cout << "ptrAlias1 address value: " <<  ptrAlias1 << " ptrAlias2 address value: " << ptrAlias2 << endl;
    cout << "ptrAlias1 dereferenced value: " <<  *ptrAlias1 << " ptrAlias2 dereferenced value: " << *ptrAlias2 << endl;
  }
};

#endif /* Test_h */
