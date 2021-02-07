#include "Weapon.h"
using namespace std;

//constructors
Weapon::Weapon()
{
	name = "";
	description = "";
	damage = 0;
}
Weapon::Weapon(string n, string d, int i)
{
	name = n;
	description = d;
	damage = i;
}

void Weapon::setName(string n)
{
	name = n;
}

void Weapon::setDescription(string d)
{
	description = d;
}

void Weapon::setDamage(int d)
{
	damage = d;
}

void Weapon::setWeaponAbility(string s)
{
	abilities.push_back(s);
}

string Weapon::getName()
{
	return name;
}

string Weapon::getDescription()
{
	return description;
}

int Weapon::getDamage()
{
	return damage;
}

