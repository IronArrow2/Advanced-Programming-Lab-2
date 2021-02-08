#pragma once
#include "CharacterClass.h"

class Nephilim : public CharacterClass
{
private:
	int damageResistance = 20; //percentile value
public:
	Nephilim();//default constructor
	Nephilim(string n, int h, Weapon* w);//constructor that sets all parameters manually, using a preset Weapon object
	Nephilim(string n, Weapon* w);//constructor that sets health to preset, using a preset Weapon object
	Nephilim(string n, string weaponName, string weaponDescription, int weaponDamage);
	//above constructor creates a new weapon object using parameters passed to it, setting health to preset

	//setters
	void setName(string s);
	void setHealth(int i);
	void setCharacterWeapon(Weapon* w);
	void setCharacterWeapon(string name, string description, int damage);

	//getters
	string getName();
	int getHealth();
	Weapon* getCharacterWeapon();

	//implementation of the virtual function
	void DisplayInfo();
};