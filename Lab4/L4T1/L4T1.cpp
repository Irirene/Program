
#include <iostream>
#include "Weapon.h"
#include "Characteristic.h"
#include "MyMath.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    /* Task 1-3 
    Weapon g = Weapon("Gun", 14, 2, 1);
    cout << "Имя: " << g.name << " Урон: " << g.damage << " Масса: " << g.weight << endl;
    Weapon k("Knife", 5, 1, 3);
    cout << "Имя: " << k.name << " Урон: " << k.damage << " Масса: " << k.weight << endl;


    if (true)
    {
        Weapon* s = new Weapon("Sward", 7, 3, 4);
    cout << "Имя: " << s->name << " Урон: " << s->damage << " Масса: " << s->weight << endl;
    delete s;
    }*/

    Weapon m = Weapon("Knife", 5, 1, 7);
    cout << "Проверка на максимально допустимый вес: "<< m.getMaxWeight() << endl;
    Weapon l= Weapon("Lance", 6, 2, 4);
    float j = l.getWeight();
    cout << "Суммарный вес: " << m.sumWeight(j) << endl;
    cout << "Суммарный вес(перегрузка): " << m.sumWeight()<< endl;


    // Task 4

    Weapon g = Weapon("Gun", 14, 2, 1);
    cout << "Имя: " << g.getName() << " Урон: " << g.getDamage() << " Масса: " << g.getWeight() << endl;
    g.setDamage(15);
    cout << "Урон: " << g.getDamage() << endl;

    Characteristic b = Characteristic(5);
    b.getDamage(&g);
    cout<< "Сумма силы и уроны: " << b.getDamage(&g) <<endl;

    int d = 4;
    int h = 9;
    cout << "Сумма: " << MyMath::add(d, h) << endl;
    cout << "Разность: " << MyMath::sab(d, h) << endl;
    cout << "Умножение: " << MyMath::mult(d, h) << endl;
    cout << "Деление: " << MyMath::div(d, h) << endl;
    cout << "Значение статической переменной: " << MyMath::counter << endl;
}