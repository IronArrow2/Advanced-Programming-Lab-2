#include "Devil.h"

Devil::Devil()
{
	name = "";
	health = 0;
	characterWeapon = new Weapon();
	mana = 0;
	specialAbility = "Infernal Might: Your weapon damage is doubled.";
}

Devil::Devil(string n, int h, Weapon* w, int m)
{
	name = n;
	health = h;
	characterWeapon = w;
	mana = m;
	characterWeapon->setDamage(characterWeapon->getDamage() * 2);
	specialAbility = "Infernal Might: Your weapon damage is doubled.";
}

Devil::Devil(string n, Weapon* w)
{
	name = n;
	health = 666;
	characterWeapon = w;
	mana = 100;
	characterWeapon->setDamage(characterWeapon->getDamage() * 2);
	specialAbility = "Infernal Might: Your weapon damage is doubled.";
}

Devil::Devil(string n, string weaponName, string weaponDescription, int weaponDamage)
{
	name = n;
	health = 666;
	mana = 100;
	characterWeapon = new Weapon(weaponName, weaponDescription, weaponDamage);
	characterWeapon->setDamage(characterWeapon->getDamage() * 2);
	specialAbility = "Infernal Might: Your weapon damage is doubled.";
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
	characterWeapon->setDamage(characterWeapon->getDamage() * 2);
}

void Devil::setCharacterWeapon(string name, string description, int damage)
{
	characterWeapon = new Weapon(name, description, damage);
	characterWeapon->setDamage(characterWeapon->getDamage() * 2);
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
	std::cout << "Name: " << name << " \nMax Health: " << health << " \nWeapon Info: " << *characterWeapon << " \nMax Mana: " << mana << " \nSpecial Ability: " << specialAbility;
}
