#pragma once

#include <iostream>
using namespace std;

enum class Types
{
    ONEHANDED,
    TWOHANDED,
    BOW,
    CROSSBOW
};
class Weapon
{

    string name;
    float damage;
    float weight;
    int maxWeight;
    Types d;

public:
    Weapon();

    Weapon(string name, float damage, float weight, int maxWeight, Types d);

    ~Weapon();

    string getName();
    float getDamage();
    float getWeight();
    int getmaxWeight();
    Types getd();

    void setDamage(float damage);

    bool getMaxWeight();
    int sumWeight(Weapon* a);
};
