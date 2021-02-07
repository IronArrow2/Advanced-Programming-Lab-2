#pragma once
#include <string>
#include <iostream>
#include "Weapon.h"
using namespace std;

class CharacterClass
{
protected:
 	string name;
	int health;
	Weapon* characterWeapon; //NOT a dymanic array
public:
	virtual void DisplayInfo() = 0;
};