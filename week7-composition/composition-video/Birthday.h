#ifndef Header_h
#define Header_h
#pragma once

class Birthday{
  public:
    Birthday(int m, int d, int y);
    void printDate();
  private:
    int month;
    int day;
    int year;
};

#endif /* Header_h */
