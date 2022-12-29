#include <iostream>
#include "Tree.h"
#include "Balance.h"
#include "Avl.h"
#include "Node.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "");

    Avl* n = new Avl();
    int c;
    cout << "Введите количество узлов: ";
    cin >> c;
    cout << "Введите числа через enter: ";
    int x;
    node* d=0;
    for (int i = 0; i < c; i++)
    {
        cin >> x;
        n->insert(d, x);
    }
}