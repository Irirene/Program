#include "OneOffWepon.h"

OneOffWepon::OneOffWepon() : Weapon(), flg(false) {}

OneOffWepon::OneOffWepon(string name, int damage, int weight, int maxWeight, Types d) : Weapon(name, damage, weight, maxWeight, d), flg(false) {}

void OneOffWepon::attack()
{
	if (this->flg) {
		cout << "Оружие уже было использовано" << endl;
	}
	else {
		this->flg = true;

		cout << "Атакуем одноразовым оружием" << endl;
	}
}