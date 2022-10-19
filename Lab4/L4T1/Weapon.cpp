#include "Weapon.h"

Weapon::Weapon()
{
    this->name = name;
    this->damage = damage;
    this->weight = weight;
    this->maxWeight = maxWeight;
}

Weapon::Weapon(string name, float damage, float weight, int maxWeight) :name(name), damage(damage), weight(weight), maxWeight(maxWeight) {};


Weapon::~Weapon()
{
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

int Weapon::sumWeight(float weight)
{
    return this->weight + weight;
}


