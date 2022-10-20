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

string Weapon::getName()
{
    return this->name;
}

float Weapon::getDamage()
{
    return this->damage;
}

float Weapon::getWeight()
{
    return this->weight;
}

int Weapon::getmaxWeight()
{
    return this->maxWeight;
}

void Weapon::setDamage(float damage)
{
    if (damage > this->damage) this->damage = this->damage;
    else if (damage < 0) cout << "Вы ввели отрицательное число!" << endl;
    else this->damage=damage;
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


