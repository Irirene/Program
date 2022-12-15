#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Settings
{
private:
	static map <string, int> map;

public:

	static void add(string k, int v)
	{
		map.insert(make_pair(k, v));
		map[k] = v;
	}

	static int get(string k)
	{
		return map[k];
	}

	static void print()
	{
		cout << "Вывод Map: " << endl;
		for (auto i = map.begin(); i != map.end(); i++) {

			cout << i->first << " = " << i->second << "\n";
		}
	}


};

void print(vector<float> v)
{
	cout << "Vector: ";
	for (float n : v) cout << n << " ";
	cout << "\n-------------\n";
}

int main()
{
	vector<float> v = { 1.2,2.3,3.4,4.5,5.6 };
	print(v);

	auto iter = v.cbegin();
	v.emplace(iter + 3, 10);
	print(v);

	v.pop_back();
	print(v);


	/*Settings q;
	q.add("first", 2);
	q.add("second", 3);
	q.print();
	cout << q.get("second");*/

	Settings maps;
	maps.add("first", 2);
	maps.add("second", 1);
	maps.print();
	cout << maps.get("second");
}