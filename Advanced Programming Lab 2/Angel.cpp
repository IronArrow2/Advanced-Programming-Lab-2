#include "Angel.h"

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
	std::cout << "Name: " << name << " Max Health: " << health << " Weapon Info: " << *characterWeapon << " Max Mana: " << mana;
}