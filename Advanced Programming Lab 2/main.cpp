#include <iostream>
#include <string>
#include <vector>
#include <ios> //used to get stream size
#include <limits> //used to get numeric limits
#include "CharacterClass.h"
#include "Devil.h"
#include "Weapon.h"
using namespace std;

/*To do:
*Finish Angel, Devil and Nephilim classes, including special abilities for all three
*Get menu set up in main (current code in there is just for testing)
*Allow creation of multiple characters in menu using a vector*/

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