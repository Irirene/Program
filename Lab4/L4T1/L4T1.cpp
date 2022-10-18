
#include <iostream>
using namespace std;

class Weapon
{
public:
    string name;
    float damage;
    float weight;
    int maxWeight;

    Weapon(string name, float damage, float weight, int maxWeight)
    {
        this->name = name;
        this->damage = damage;
        this->weight = weight;
        this->maxWeight = maxWeight;
    }

    Weapon() : Weapon(name,damage,weight, maxWeight) {};

    /*~Weapon()
    {
        cout << "Объект " << name << " уничтожается" << endl;
    }*/

    bool getMaxWeight ()
    {
        if (maxWeight > weight)
        {
            return true;
        }
        else return false;
    }

    int sumWeight(Weapon* a)
    {
        return a->weight + weight;
    }

    //перегрузка
    int sumWeight(float weight)
    {
        return this->weight + weight;
    }
};


int main()
{
    setlocale(LC_ALL, "");
    /*Weapon g = Weapon("Gun", 14, 2);
    cout << "Имя: " << g.name << " Урон: " << g.damage << " Масса: " << g.weight << endl;
    Weapon k("Knife", 5, 1);
    cout << "Имя: " << k.name << " Урон: " << k.damage << " Масса: " << k.weight << endl;


    if (true)
    {
        Weapon* s = new Weapon("Sward", 7, 3, 4);
    cout << "Имя: " << s->name << " Урон: " << s->damage << " Масса: " << s->weight << endl;
    delete s;
    }*/

    Weapon k("Knife", 5, 1, 7);
    cout << "Проверка на максимально допустимый вес: "<< k.getMaxWeight() << endl;
    Weapon l("Lance", 6, 2, 4);
    cout <<"Суммарный вес: " << k.sumWeight(&l)<< endl;
    cout << "Суммарный вес: " << k.sumWeight(2) << endl;
}