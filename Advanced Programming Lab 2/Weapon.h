#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Weapon
{
private:
	friend class CharacterClass;
	friend class Devil;
protected:
	string name;
	string description;
	int damage;
	vector<string> abilities;
	
public:
	//constructors
	Weapon();
	Weapon(string n, string d, int i);

	//setter functions
	void setName(string n);
	void setDescription(string d);
	void setDamage(int d);
	void addWeaponAbility(string s);//adds an ability to the end of the vector
	void setAbilityVector(vector<string> s);

	//getter functions
	string getName();
	string getDescription();
	int getDamage();
	string getWeaponAbilityGivenIndex(int i);
	string displayEntireAbilityVector();
	vector<string> getEntireAbilityVector();


	friend ostream& operator<<(ostream& output, Weapon& W)
	{
		output << "Name: " << W.getName() << " Damage:  " << W.getDamage() << " Description: " << W.getDescription();
		return output;
	}
};