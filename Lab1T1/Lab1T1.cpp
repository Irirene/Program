#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int x;
	cin >> x;
	while (x < 0)
	{
		cout << "Вы ввели отрицательное число. Введите положительное число" << endl;
		cin >> x;
	}
	cout << "Введенное вами число: " << x << endl;


	int a, sum;
	cout << "Введите одно число" << endl;
	cin >> a;
	sum = 0;
	for (int j = 1; j <= a; j++)
	{
		sum += j;
	}
	cout << "Сумма чисел от 1 до введенного числа: " << sum << endl;


	int A[] = { 5,6,13,24,78,56,39,43,1,7 };
	int len = sizeof(A) / sizeof(A[0]);
	cout << "Массив" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;

	cout << "Четные элементы массива" << endl;
	for (int i = 0; i < len; i += 2)
	{
		cout << A[i] << endl;
	}

	cout << "Сумма нечетных элементов массива" << endl;
	int Asum = 0;
	for (int i = 1; i < len; i += 2)
	{
		Asum += A[i];
	}
	cout << Asum << endl;

}
