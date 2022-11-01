#include "MagicWeapon.h"

MagicWeapon::MagicWeapon()
{
    this->moreDamage = moreDamage;
}

MagicWeapon::MagicWeapon(int moreDamage):moreDamage(moreDamage) {}
int MagicWeapon::getmoreDamage()
{
    return this->moreDamage;
}
;
