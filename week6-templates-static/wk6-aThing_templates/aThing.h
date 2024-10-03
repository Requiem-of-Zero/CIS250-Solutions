#ifndef Header_h
#define Header_h
#pragma once
#include <iostream>

using namespace std;

template <class T>
class aThing { // declaring class
  private:
    T weight;
  public: // declare public members block of the class
    aThing(): weight(10){};
    T getWeight() const;
    void setWeight(T inWeight);
};

template <class T>
T aThing<T>::getWeight() const {
  return weight;
}

template <class T>
void aThing<T>::setWeight(T inWeight){
  weight = inWeight;
}


#endif /* Header_h */