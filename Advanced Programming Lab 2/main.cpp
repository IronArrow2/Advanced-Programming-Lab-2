#include <iostream>
#include <string>
#include <ios> //used to get stream size
#include <limits> //used to get numeric limits
#include "CharacterClass.h"
#include "Devil.h"
#include "Weapon.h"
using namespace std;

int main()
{
	string input, characterName, weaponName, weaponDescription;
	int weaponDamage;
	Devil playerCharacter;
	Weapon playerWeapon;
	cout << "Create your character! " << endl;
	cout << "Name: ";
	cin >> input;
	characterName = input;
	cout << "Weapon name: ";
	cin >> input;
	weaponName = input;
	cout << "Weapon description: " << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');//flush remaining nextline character out of the stream
	cin.clear();
	getline(cin, input);
	weaponDescription = input;
	cout << "Weapon damage: ";
	cin >> input;
	weaponDamage = stoi(input);

	playerCharacter = Devil(characterName, weaponName, weaponDescription, weaponDamage);

	playerCharacter.DisplayInfo();

	return 0;
}