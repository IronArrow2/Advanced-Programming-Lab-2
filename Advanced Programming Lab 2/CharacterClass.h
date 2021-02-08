#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Weapon.h"
using namespace std;

class CharacterClass
{
protected:
 	string name;
	int health;
	Weapon* characterWeapon; //NOT a dymanic array
	string specialAbility;//the text in this string will be different for each subclass
public:
	virtual void DisplayInfo() = 0;
};