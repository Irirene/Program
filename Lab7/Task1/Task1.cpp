#include <iostream>
#include <string>
using namespace std;

void print(string s)
{
	cout << s << endl;
}

int main()
{
	setlocale(LC_ALL, "");
	string m;
	cin >> m;
	print(m.substr(2, 3));

	int index = m.find("a");
	print(to_string(index));
	if (index == 0) cout << "Символа а не найдено" << endl;
}