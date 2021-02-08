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

void Weapon::addWeaponAbility(string s)
{
	abilities.push_back(s);
}

void Weapon::setAbilityVector(vector<string> s)
{
	for (int i = 0; i < s.size(); i++)
	{
		abilities[i] = s[i];
	}
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

string Weapon::getWeaponAbilityGivenIndex(int i)
{
	return abilities[i];
}

void Weapon::displayEntireAbilityVector()
{
	for (int i = 0; i < abilities.size(); i++)
	{
		cout << "Ability " << i << ": " << abilities[i];
	}
}

string Weapon::displayEntireAbilityVector(string s)
{//s should be blank string
	for (int i = 0; i < abilities.size(); i++)
	{
		s = s + abilities[i] + " ";
	}
	return s;
}

vector<string> Weapon::getEntireAbilityVector()
{
	return abilities;
}

