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
public:
    Weapon();

    Weapon(string name, int damage, int weight, int maxWeight, Types d);

    ~Weapon();

    string getName();
    int getDamage();
    int getWeight();
    int getmaxWeight();
    Types getd();

    void setDamage(int damage);

    bool getMaxWeight();
    int sumWeight(Weapon* a);

    virtual int plusDamage();

protected:
    string name;
    int damage;
    int weight;
    int maxWeight;
    Types d;
};
