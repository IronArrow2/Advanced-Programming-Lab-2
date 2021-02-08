#pragma once
#include "CharacterClass.h"
#include <string>

class Angel : public CharacterClass
{
private:
	int mana;
	int healthRegenRate = 2;
	string specialAbility = "Divine Health: Massive base health and innate health regeneration.";
public:
	Angel();//default constructor
	Angel(string n, int h, Weapon* w, int m);//constructor that sets all parameters manually, using a preset Weapon object
	Angel(string n, Weapon* w);//constructor that sets health and mana to presets, using a preset Weapon object
	Angel(string n, string weaponName, string weaponDescription, int weaponDamage);
	//above constructor creates a new weapon object using parameters passed to it, setting health and mana to presets

	//setters
	void setName(string s);
	void setHealth(int i);
	void setMana(int m);
	void setCharacterWeapon(Weapon* w);
	//getters
	string getName();
	int getHealth();
	int getMana();
	Weapon* getCharacterWeapon();

	//implementation of the virtual function
	void DisplayInfo();
};