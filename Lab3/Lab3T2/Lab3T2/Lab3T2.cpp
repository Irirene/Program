
#include <iostream>
using std::cout;
using std::endl;


int printArr(int* begin, int* end)
{
    int sum = 0;
    for (int* p = begin; p < end; p++)
    {
        sum += *p;
    }
    return sum;
}

int sum(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}

int (*fun(char k))(int, int)
{
    if (k == '+')
        return sum;
    if (k == '-')
        return sub;
}

int main()
{
    setlocale(LC_ALL, "");
    int Arr[] = { 11, 68, 7, 24, 37 };
    int* begin = std::begin(Arr);
    int* end = std::end(Arr);
    cout << "Сумма элементов массива = ";
    cout << printArr(begin, end) << endl;

    int a = 3;
    int b = 5;
    int ft = fun('+')(a,b);
    cout << ft << endl;
    int ft1 = fun('-')(a, b);
    cout << ft1 << endl;


    float* pc1 = new float(12.5);
    cout << *pc1 << endl;
    delete pc1;
}

