
#include <iostream>
using std::cout;
using std::endl;


void fun1(int s)
{
    static int st = 0;
    cout << s + st << endl;
    st = s;
}

#define SUM(w, j) w+j

#include "Static.h"
using namespace Myname;

int main()
{
    setlocale(LC_ALL, "");
    int s = 7;
    int m = 15;
    int y = 63;
    cout << "Выполнение функции со статической переменной: " << endl;
    fun1(s);
    fun1(m);
    fun1(y);

    cout << "Сумма чисел(макрос): " << SUM(45, 8) << endl;


    int a = 9;
    int b = 5;
    int c = 27;
    cout << Myname::stat(a) << endl;
    cout << Myname::stat(b) << endl;
    cout << Myname::stat(c) << endl;
    system("pause");
}
