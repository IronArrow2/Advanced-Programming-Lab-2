#include "Devil.h"

Devil::Devil()
{
	name = "";
	health = 0;
	characterWeapon = new Weapon();
	mana = 0;
}

Devil::Devil(string n, int h, Weapon* w, int m)
{
	name = n;
	health = h;
	characterWeapon = w;
	mana = m;
}

Devil::Devil(string n, Weapon* w)
{
	name = n;
	health = 666;
	characterWeapon = w;
	mana = 100;
}

Devil::Devil(string n, string weaponName, string weaponDescription, int weaponDamage)
{
	name = n;
	health = 666;
	mana = 100;
	characterWeapon = new Weapon(weaponName, weaponDescription, weaponDamage);
}

void Devil::setName(string s)
{
	name = s;
}

void Devil::setHealth(int i)
{
	health = i;
}

void Devil::setMana(int m)
{
	mana = m;
}

void Devil::setCharacterWeapon(Weapon* w)
{
	characterWeapon = w;
}

void Devil::setCharacterWeapon(string name, string description, int damage)
{
	characterWeapon = new Weapon(name, description, damage);
}

string Devil::getName()
{
	return name;
}

int Devil::getHealth()
{
	return health;
}

int Devil::getMana()
{
	return mana;
}

Weapon* Devil::getCharacterWeapon()
{
	return characterWeapon;
}

void Devil::DisplayInfo()
{
	std::cout << "Name: " << name << " Max Health: " << health << " Weapon Info: " << *characterWeapon << " Max Mana: " << mana;
}
