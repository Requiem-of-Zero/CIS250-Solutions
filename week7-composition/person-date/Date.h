#ifndef Date_h
#define Date_h
#pragma once
#include <iostream>
#include <map>

using namespace std;

class Date{
private:
  int month, day, year;
public:
  int getMonth() const { return month; }
  int getDay() const { return day; }
  int getYear() const { return year; }
  void setMonth(int);
  void setDay(int);
  void setYear(int);
  
  Date(): month(1), day(1), year(1900){}
  Date(int m, int d, int y) : month(m), day(d), year(y){}
};

void Date::setMonth(int m){
  if(m < 1 || m > 12){
    cout << "Invalid month, out of valid scope. Not within 1-12." << endl;
  } else {
    month = m;
  }
}

void Date::setDay(int d){
  map<int, int> monthDays;
  
  monthDays[1] = 31;   // January
  monthDays[2] = 28;   // February (not considering leap year)
  monthDays[3] = 31;   // March
  monthDays[4] = 30;   // April
  monthDays[5] = 31;   // May
  monthDays[6] = 30;   // June
  monthDays[7] = 31;   // July
  monthDays[8] = 31;   // August
  monthDays[9] = 30;   // September
  monthDays[10] = 31;  // October
  monthDays[11] = 30;  // November
  monthDays[12] = 31;  // December

  if(monthDays.find(month) != monthDays.end()){
    if(d < 1 || d > monthDays[month]){
      cout << "Invalid day for the current month. The day should be between 1 and " << monthDays[month] << "." << endl;
    } else {
      day = d;
    }
  } else {
    cout << "Month is not set. Please set a valid month." << endl;
  }
}

void Date::setYear(int y){
  if(y >= 1900){
    year = y;
  } else {
    cout << "Invalid year, please enter a year greater or equal to 1900." << endl;
  }
}

#endif /* Date_h */
