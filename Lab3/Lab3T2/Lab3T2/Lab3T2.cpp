
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

int fun(char a, int x, int y)
{
    if (a == '+')
        return sum(x, y);
    if (a == '-')
        return sub(x, y);
}

int main()
{
    setlocale(LC_ALL, "");
    int Arr[] = { 11, 68, 7, 24, 37 };
    int* begin = std::begin(Arr);
    int* end = std::end(Arr);
    cout << "Сумма элементов массива = ";
    cout << printArr(begin, end) << endl;


    cout << "Если '+': " << fun('+', 12, 9) << endl;
    cout << "Если '-': " << fun('-', 58, 7) << endl;


    float* pc1 = new float(12.5);
    cout << *pc1 << endl;
    delete pc1;
}

