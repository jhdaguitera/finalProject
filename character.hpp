/*********************************************************************************************************************
name: jason daguitera
cs 162
file: character.hpp
description: this the file for header of character class objects and methods

**********************************************************************************************************************/
#ifndef character_hpp
#define character_hpp

#include<iostream>
#include<string>

class Character
{

protected:
	std::string type;
	double strength;
	bool playerLost;
	int weapon;
	int armor;



public:
	
	virtual int attacker() = 0;
	virtual void defender(int damageTaken) = 0;

	//checks if opponent is dead 
	virtual bool checkLost() = 0;

	virtual int attackPoints() = 0;
	virtual int defensePoints() = 0;

	//getters
	virtual std::string getType() = 0;

	virtual int getWeapon() = 0;
	virtual double getStrength() = 0;

	virtual void data() = 0;


	//deallocate memory
	virtual ~Character() {}





};
#endif