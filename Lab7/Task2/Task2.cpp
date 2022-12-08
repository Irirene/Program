#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool name(string a)
{
	regex n("[A-Z][a-z]*?");
	return regex_search(a, n);
}


int main()
{
	setlocale(LC_ALL, "");
	string m;
	cout << "Введите имя: " << endl;
	cin >> m;

	if (name(m)) cout << m << endl;
	else cout << "Что-то не так!" << endl;

	string n="ShashaCoolGirls@mail.ru heiushgiuhiurg eeeemail458@mail.com";
	cmatch result;
	regex regular("([\\w-]+)(@)([\\w-]+)(\.)([a-z]{2,5})");
	auto words_begin = sregex_iterator(n.begin(), n.end(), regular);
	auto words_end = sregex_iterator();
	for (sregex_iterator it = words_begin; it != words_end; ++it)
		cout << it->str() << endl;

}