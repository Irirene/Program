#include "Weapon.h"


Weapon::Weapon()
{
    this->name = name;
    this->damage = damage;
    this->weight = weight;
    this->maxWeight = maxWeight;
    this->d = d;
}

Weapon::Weapon(string name, int damage, int weight, int maxWeight, Types d) :name(name), damage(damage), weight(weight), maxWeight(maxWeight), d(d) {};


Weapon::~Weapon()
{
}

string Weapon::getName()
{
    return this->name;
}

int Weapon::getDamage()
{
    return this->damage;
}

int Weapon::getWeight()
{
    return this->weight;
}

int Weapon::getmaxWeight()
{
    return this->maxWeight;
}

Types Weapon::getd()
{
    return this->d;
}

void Weapon::setDamage(int damage)
{
    if (damage > this->damage) this->damage = this->damage;
    else if (damage < 0) cout << "Вы ввели отрицательное число!" << endl;
    else this->damage = damage;
}

bool Weapon::getMaxWeight()
{
    if (maxWeight > weight)
    {
        return true;
    }
    else return false;
}

int Weapon::sumWeight(Weapon* a)
{
    return a->weight + weight;
}

int Weapon::plusDamage()
{
    return damage;
}




