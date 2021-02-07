#pragma once
#include <string>
#include <iostream>
using namespace std;

class Weapon
{
private:
	//void setAbilitiesArraySize(int i);
	//void setAbilitiesArrayElement(int index, string s);
	friend class CharacterClass;
	friend class Devil;
protected:
	string name;
	string description;
	int damage;
	//string* abilities; //dynamic array
	
public:
	//constructors
	Weapon();
	Weapon(string n, string d, int i);

	//setter functions
	void setName(string n);
	void setDescription(string d);
	void setDamage(int d);
	//void fillAbilitiesArray(string abilitiesArray[], int i);

	//getter functions
	string getName();
	string getDescription();
	int getDamage();

	friend ostream& operator<<(ostream& output, Weapon& W)
	{
		output << "Name: " << W.getName() << " Damage:  " << W.getDamage() << " Description: " << W.getDescription();
		return output;
	}
};