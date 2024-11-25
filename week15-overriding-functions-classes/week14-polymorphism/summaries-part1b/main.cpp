#include <iostream>
using namespace std;

class Enemy{
public:
  virtual void attack(){};
};

class Ninja: public Enemy {
public:
  void attack(){
    cout << "ninja attack!" << endl;
  }
};

class Monster: public Enemy {
public:
  void attack(){
    cout << "mponstor attack!" << endl;
  }
};

int main(){
  cout << "Name: Samuel Wong - Program Name: Summaries Part 1B - Date: 11/17/2024" << endl;
  Ninja n;
  Monster m;
  Enemy *enemy1 = &n;
  Enemy *enemy2 = &m;
  enemy1->attack();
  enemy2->attack();
}