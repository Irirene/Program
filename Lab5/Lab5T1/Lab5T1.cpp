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
        cout << "Id: " << id << endl;
        cout << "Login: " << login << endl;
        cout << "Password: " << password << endl;

    }
};


int main()
{
    setlocale(LC_ALL, "");
    Types a = Types::ONEHANDED;
    if (a == Types::ONEHANDED) cout << "Одноручное оружие" << endl;

    Gamer Sasha;
    Sasha.id = 12486465;
    Sasha.login = "SashaCoolGirl";
    Sasha.password = 1234;
    Sasha.print();

    MagicWeapon k(5);
    cout << k.getmoreDamage();

}