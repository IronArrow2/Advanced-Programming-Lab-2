#include "Angel.h"

Angel::Angel()
{
	name = "";
	health = 0;
	characterWeapon = new Weapon();
	mana = 0;
}

Angel::Angel(string n, int h, Weapon* w, int m)
{
	name = n;
	health = h;
	characterWeapon = w;
	mana = m;
}

Angel::Angel(string n, Weapon* w)
{
	name = n;
	health = 1000;
	characterWeapon = w;
	mana = 150;
}

Angel::Angel(string n, string weaponName, string weaponDescription, int weaponDamage)
{
	name = n;
	health = 1000;
	mana = 150;
	characterWeapon = new Weapon(weaponName, weaponDescription, weaponDamage);
}

void Angel::setName(string s)
{
	name = s;
}

void Angel::setHealth(int i)
{
	health = i;
}

void Angel::setMana(int m)
{
	mana = m;
}

void Angel::setCharacterWeapon(Weapon* w)
{
	characterWeapon = w;
}

string Angel::getName()
{
	return name;
}

int Angel::getHealth()
{
	return health;
}

int Angel::getMana()
{
	return mana;
}

Weapon* Angel::getCharacterWeapon()
{
	return characterWeapon;
}

void Angel::DisplayInfo()
{
	std::cout << "Name: " << name << " Max Health: " << health << " Weapon Info: " << *characterWeapon << " Max Mana: " << mana << " Special Ability: " << specialAbility;
}