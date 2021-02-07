#pragma once
#include "CharacterClass.h"
#include <string>

class Angel : public CharacterClass
{
private:
	int mana;
public:
	Angel();//default constructor

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