#pragma once

#include <iostream>
using namespace std;

class Weapon
{
    public:
        string name;
        float damage;
        float weight;
        int maxWeight;

        Weapon();

        Weapon(string name, float damage, float weight, int maxWeight);

        ~Weapon();

        bool getMaxWeight();

        int sumWeight(Weapon* a);

        //перегрузка
        int sumWeight(float weight);
};

