#include <iostream>
#include "Weapon.h"
#include "MagicWeapon.h"
using namespace std;


struct Gamer
{
    int id;
    string login;
    int password;

    void print()
    {
        cout << "Id: " << id << endl << "Login: " << login << endl << "Password: " << password << endl;
    }
};

bool operator > (Weapon a, Weapon b);
bool operator > (Weapon a, Weapon b);

bool operator > (Weapon a, Weapon b)
{
    return a.getDamage() > b.getDamage();
}
bool operator < (Weapon a, Weapon b)
{
    return a.getDamage() < b.getDamage();
}

int main()
{
    setlocale(LC_ALL, "");
    Types a = Types::ONEHANDED;
    if (a == Types::ONEHANDED) cout << "Одноручное оружие" << endl;

    Gamer Sasha;
    Sasha.id = 166565654;
    Sasha.login = "SashaCoolGirl";
    Sasha.password = 11111;
    Sasha.print();

    MagicWeapon k("Knife", 5, 6, 7, Types::ONEHANDED, 5);
    cout << k.getmoreDamage() << endl;

    MagicWeapon s("Bow", 7, 6, 7, Types::TWOHANDED, 5);
    cout <<"Дополнительный урон: " << s.plusDamage() << endl;

    Weapon v("Spear", 1, 2, 3, Types::ONEHANDED);
    Weapon j("Bolo", 7, 4, 2, Types::ONEHANDED);
    cout << (v>j) << endl;
    cout << (v<j) << endl;
}