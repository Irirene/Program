
#include <iostream>
using namespace std;
int fun1(int l = 1)
{
    int sum;
    if (l > 0) {
        sum = 0;
        for (int i = 0; i <= l; i++) {
            sum += i;
        }
        cout << "Сумма чисел до введенного: " << sum << endl;
    }
    else {
        return 0;
    }
}



void fun2(int q, int o, int& d, int& k)
{
    d = q + o;
    k = q * o;
}

int main()
{
    setlocale(LC_ALL, "");
    int A[2][3] = { {4,7,9},{9,12,2} };
    int Asum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
        {
            Asum += A[i][j];
        }
    }
    cout << "Сумма элементов масиива: " << Asum << endl;


    int B[] = { 24, 78, 45 };
    B[0] = A[0][0] + A[1][0];
    B[1] = A[0][1] + A[1][1];
    B[2] = A[0][2] + A[1][2];
    cout << "Новый одномерный массив:";
    for (int i = 0; i < 3; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    float a = 20.48;
    float& b = a;
    float& c = a;
    b = 11.2;
    c = 7.5;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    cout << "c= " << c << endl;


    fun1();
    int q = 7;
    int o = 24;
    int d, k;
    fun2(q, o, d, k);
    cout << "Сумма чисел = " << d << endl;
    cout << "Произведение чисел = " << k << endl;


    int s = 158;
    cout << "Вывод переменной с помощью cout: " << s << endl;
    cout << "Вывод переменной с помощью цикла for: " << endl;
    for (int i = 0; i < 3;i++)
    {
        int u = 2;
        cout << s << endl;
        cout << u << endl;
    }
    cout << u;

}
