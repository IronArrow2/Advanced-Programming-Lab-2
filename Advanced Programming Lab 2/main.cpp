/*Other files I'll need:
CharacterClass.cpp & .h (abstract class)
Weapon.cpp & .h
Three other .cpp & .h files that are children of CharacterClass.h*/
#include <iostream>
#include <string>
#include "Devil.h"
#include "Weapon.h"
using namespace std;

int main()
{
	string input, name, weaponName, weaponDescription;
	int weaponDamage;
	Devil playerCharacter;
	Weapon playerWeapon;
	cout << "Create your character! " << endl;
	cout << "Name: ";
	cin >> input;
	name = input;
	cout << "Weapon name: ";
	cin >> input;
	weaponName = input;
	cout << "Weapon description: ";
	cin >> input;
	weaponDescription = input;
	cout << "Weapon damage: ";
	cin >> input;
	weaponDamage = stoi(input);

	playerCharacter = Devil(name, weaponName, weaponDescription, weaponDamage);

	playerCharacter.DisplayInfo();

	return 0;
}