#include "MagicWeapon.h"

MagicWeapon::MagicWeapon() : MagicWeapon("N", 0, 0, 0 ,Types::ONEHANDED, 0) {};
MagicWeapon::MagicWeapon(string name, int damage, int weight, int maxWeight, Types d, int moreDamage) : Weapon(name, damage, weight, maxWeight, d)
{
    this->moreDamage = moreDamage;
}

int MagicWeapon::getmoreDamage()
{
    return moreDamage;
}

int MagicWeapon::plusDamage()
{
    return Weapon::getDamage() + moreDamage;
}

void MagicWeapon::attack()
{
    cout << "Атакуем магическим оружием " << this->name<< endl;
}


