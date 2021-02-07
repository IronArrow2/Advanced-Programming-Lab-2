#pragma once
#include "CharacterClass.h"

class Devil : public CharacterClass
{
private:
	int mana;
public:
	Devil();//default constructor
	Devil(string n, int h, Weapon* w, int m);//constructor that sets all parameters manually
	Devil(string n, Weapon* w);//constructor that sets health and mana to presets
	Devil(string n, string weaponName, string weaponDescription, int weaponDamage); 
	//above constructor creates a new weapon object using parameters passed to it, setting health and mana to presets

	//setters
	void setName(string s);
	void setHealth(int i);
	void setMana(int m);
	void setCharacterWeapon(Weapon* w);
	void setCharacterWeapon(string name, string description, int damage);

	//getters
	string getName();
	int getHealth();
	int getMana();
	Weapon* getCharacterWeapon();

	//implementation of the virtual function
	void DisplayInfo();
};