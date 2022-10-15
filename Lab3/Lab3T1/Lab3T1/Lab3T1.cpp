
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    setlocale(LC_ALL, "");
    int* i;
    int a = 100;
    i = &a;
    cout << "Указатель *i: " << *i << endl;
    *i += 50;
    cout << "Измененное значение указателя *i: " << *i << endl;
    cout << "a= " << a << endl;


    cout << "Элементы массива:" << endl;
    int Arr[] = { 19, 24, 65, 78 };
    for (int i = 0; i < 4; i++)
    {
        cout << *(Arr + i) << endl;
    }

    int b = 5;
    int* const con = &b;
    cout << "Значение переменной без изменений = " << b << endl;
    *con = 50;
    cout << "Изменное значение переменной = " << b << endl;
}