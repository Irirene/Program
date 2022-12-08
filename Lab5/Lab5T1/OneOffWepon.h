#pragma once
#include "Weapon.h"
class OneOffWepon : public Weapon
{

private:
	bool flg;

public:
	OneOffWepon();
	OneOffWepon(string name, int damage, int weight, int maxWeight, Types d);

public:
	void attack();

};

