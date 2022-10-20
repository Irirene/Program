#pragma once

#include <iostream>
using namespace std;

class Weapon
{
        string name;
        float damage;
        float weight;
        int maxWeight;
        friend class Characteristic;

public:
        Weapon();

        Weapon(string name, float damage, float weight, int maxWeight);

        ~Weapon();

        string getName();
        float getDamage();
        float getWeight();
        int getmaxWeight();

        void setDamage(float damage);

        bool getMaxWeight();
        int sumWeight(Weapon* a);
        //перегрузка
        int sumWeight(float weight);
};

