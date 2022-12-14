#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	float r;
	cout << "Введите радиус окружности: " << endl;
	cin >> r;
	float s = 2 * M_PI * r;
	cout << s << endl;
	float rs = trunc(s * 1000 + 0.5) / 1000;
	cout << rs << endl;

	string q;
	cout << "Введите текст: " << endl;
	cin >> q;
	fstream fs;
	fs.open("C:\\Users\\Asus\\OneDrive\\Рабочий стол\\Политех\\2 курс\\Программирование\\Labs\\Lab7\\task3\\f1.txt", std::ios::out);
	string data;
	string line;
	while (getline(fs, q)) 
	{
		data += q + "\n";
	}
	fs.close();
} 
