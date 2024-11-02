#ifndef Weapon_h
#define Weapon_h
#pragma once

class Weapon {
private:
  double m_AtkBonus, m_Volatility;
public:
  double GetAtkBonus();
  /*!
   Returns AtkBonus Value
   !*/
  double GetVolatility();
  /*!
   Returns Volatility Value
   !*/
  Weapon();
};

#endif /* Weapon_h */
