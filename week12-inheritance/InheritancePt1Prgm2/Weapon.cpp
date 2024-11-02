#include "Weapon.h"
#include <iostream>

using namespace std;

Weapon::Weapon(){
  m_AtkBonus = 3;
  m_Volatility = 6;
};

double Weapon::GetAtkBonus(){
  return m_AtkBonus;
};

double Weapon::GetVolatility(){
  return m_Volatility;
};