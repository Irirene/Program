
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	float a;
	float b;
	cout << "Введите два числа: " << endl;
	cin >> a >> b;
	float sred = ((a + b) / 2);
	cout << "Срднее арифметическое числе: " << sred << endl;


	cout << "Введите один из знаков операций: +, -, * или /:" << endl;
	/*string str;
	cin >> str;
	if (str == "+")
	{
		int sum = a + b;
		cout << "Сумма двух чисел: " << sum << endl;
	}
	else if (str == "-")
	{
		int rasn = a - b;
		cout << "Разность двух чисел: " << rasn << endl;
	}
	else if (str == "*")
	{
		float times = a * b;
		cout << "Произведение двух чисел: " << times << endl;
	}
	else if (str == "/")
	{
		float dele = (a / b);
		cout << "Частное двух чисел: " << dele << endl;
	}*/


	char sumb;
	cin >> sumb;
	switch (sumb) {
	case  '+': cout << "Сумма двух чисел: " << a + b;
		break;
	case '-': cout << "Разность двух чисел: " << a - b;
		break;
	case '*': cout << "Произведение двух чисел: " << a * b;
		break;
	case '/': cout << "Частное двух чисел: " << (a / b);
		break;
	default: cout << "Введен другой символ";
	}
}
