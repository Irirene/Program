#pragma once
#include "Weapon.h"
class MagicWeapon : public Weapon
{
   int moreDamage;
public:
    MagicWeapon();
    MagicWeapon(string name, int damage, int weight, int maxWeight, Types d, int moreDamage);

    int getmoreDamage();

    int plusDamage() override;
};

