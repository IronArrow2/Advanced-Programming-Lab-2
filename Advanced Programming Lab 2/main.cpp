#include <iostream>
#include <string>
#include <vector>
#include <ios> //used to get stream size
#include <limits> //used to get numeric limits
#include "CharacterClass.h"
#include "Devil.h"
#include "Angel.h"
#include "Nephilim.h"
#include "Weapon.h"
using namespace std;

/*To do:
*Get menu set up in main (current code in there is just for testing)
*Allow creation of multiple characters in menu using a vector*/

int main()
{
	bool exitLoop = false;
	bool exitInnerLoop = false;
	string input, characterName, weaponName, weaponDescription, characterClass;
	int weaponDamage, inputNum;
	Weapon playerWeapon;
	vector<CharacterClass*> characterVector;
	vector<CharacterClass*>::iterator it;

	while (exitLoop == false)
	{//make sure that the loop can close at some point else you're gonna have a bad time
		cout << "Welcome to the create-your-own-overpowered-character program prototype! \n Enter a number between 1 and 4 to navigate the menu! \n 1: Create a character "
			"\n 2: View made characters \n 3: Delete a character \n 4: Exit program \n";
		cin >> input;
		if (stoi(input) == 1)
		{
			cout << "Create your character! " << endl;
			cout << "Character class! Options are Angel, Devil and Nephilim: ";
			while (exitInnerLoop == false)
			{
				cin >> input;
				if (input == "Angel" || input == "Devil" || input == "Nephilim")
				{
					characterClass = input;
					exitInnerLoop = true;
				}
				else
				{
					cout << "Invalid input. Try again please: ";
				}
			}

			exitInnerLoop = false;
			cout << "Name: ";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');//flush remaining nextline character out of the stream
			cin.clear();
			getline(cin, input);
			characterName = input;
			cout << "Weapon name: ";
			getline(cin, input);
			weaponName = input;
			cout << "Weapon description: " << endl;
			getline(cin, input);
			weaponDescription = input;
			cout << "Weapon damage: ";
			cin >> input;
			weaponDamage = stoi(input);
			cout << '\n';

			if (characterClass == "Angel")
			{
				Angel* playerCharacter = new Angel(characterName, weaponName, weaponDescription, weaponDamage);
				characterVector.push_back(playerCharacter);
				//playerCharacter->DisplayInfo();
			}
			else if (characterClass == "Devil")
			{
				Devil* playerCharacter = new Devil(characterName, weaponName, weaponDescription, weaponDamage);
				characterVector.push_back(playerCharacter);
				//playerCharacter->DisplayInfo();
			}
			else if (characterClass == "Nephilim")
			{
				Nephilim* playerCharacter = new Nephilim(characterName, weaponName, weaponDescription, weaponDamage);
				characterVector.push_back(playerCharacter);
				//playerCharacter->DisplayInfo();
			}
			cout << '\n';
		}
		else if (stoi(input) == 2)
		{
			for (int i = 0; i < characterVector.size(); i++)
			{
				cout << "Character " << i + 1 << ":\n";
				characterVector[i]->DisplayInfo();
				cout << endl;
			}
		}
		else if (stoi(input) == 3)
		{
			it = characterVector.begin();
			cout << "Which character to delete? ";
			cin >> inputNum;
			for (int i = 0; i < inputNum; i++)
			{
				it++;
			}
			it--;
			characterVector.erase(it);
		}
		else if (stoi(input) == 4)
		{
			exitLoop = true;
		}
		else
		{
			cout << "Invalid input. Only input a number between 1 and 4 please. " << endl;
		}
	}
	return 0;
}