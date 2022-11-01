#pragma once
#include "Weapon.h"
class MagicWeapon : public Weapon
{
    int moreDamage;
public:
    MagicWeapon();
    MagicWeapon(int moreDamage);

    int getmoreDamage();
};

