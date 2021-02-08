#include "Nephilim.h"

Nephilim::Nephilim()
{
	name = "";
	health = 0;
	characterWeapon = new Weapon();
	specialAbility = "Etheric Armour: Permanent 20% damage resistance, calculated before armour (NOTE: armour is not implemented yet)";
}

Nephilim::Nephilim(string n, int h, Weapon* w)
{
	name = n;
	health = h;
	characterWeapon = w;
	specialAbility = "Etheric Armour: Permanent 20% damage resistance, calculated before armour (NOTE: armour is not implemented yet)";
}

Nephilim::Nephilim(string n, Weapon* w)
{
	name = n;
	health = 700;
	characterWeapon = w;
	specialAbility = "Etheric Armour: Permanent 20% damage resistance, calculated before armour (NOTE: armour is not implemented yet)";
}

Nephilim::Nephilim(string n, string weaponName, string weaponDescription, int weaponDamage)
{
	name = n;
	health = 700;
	characterWeapon = new Weapon(weaponName, weaponDescription, weaponDamage);
	specialAbility = "Etheric Armour: Permanent 20% damage resistance, calculated before armour (NOTE: armour is not implemented yet)";
}

void Nephilim::setName(string s)
{
	name = s;
}

void Nephilim::setHealth(int i)
{
	health = i;
}

void Nephilim::setCharacterWeapon(Weapon* w)
{
	characterWeapon = w;
}

void Nephilim::setCharacterWeapon(string name, string description, int damage)
{
	characterWeapon = new Weapon(name, description, damage);
}

string Nephilim::getName()
{
	return name;
}

int Nephilim::getHealth()
{
	return health;
}

Weapon* Nephilim::getCharacterWeapon()
{
	return characterWeapon;
}

void Nephilim::DisplayInfo()
{
	std::cout << "Name: " << name << " \nMax Health: " << health << " \nWeapon Info: " << *characterWeapon << " \nSpecial Ability: " << specialAbility;
}