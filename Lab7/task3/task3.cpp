#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void read()
{
	fstream fs("f.txt");
	string line;
	while (getline(fs, line)) cout << line << '\n';
	fs.close();
}

void erase()
{
	fstream fs;
	fs.open("f.txt", fstream::out | fstream::trunc);
	fs.close();
}

void write(string& q)
{
	fstream fs;
	fs.open("f.txt", ios::app);
	fs << q << '\n';
	fs.close();
}

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

	fstream fs;

	fs.open("f.txt", ios::in);
	string data;
	fs >> data;
	cout << data << "\n";
	fs << "jjsbfjhbsdhv";
	fs.close();

	cout << "Введите текст: " << endl;
	string q;
	cin >> q;

	/*fs.open("f.txt", ios::in);
	while (getline(fs, q)) {
		data = data +  q + "\n";
	}
	fs << 
	fs.close();*/

	while (true)
	{
		if (q == "exit") break;
		else if (q == "read") read();
		else if (q == "erase") erase();
		else write(q);
	}
} 
