/*********************************************************************************************************************
Name: Jason Daguitera
CS 162
File: character.hpp
Description: this the file for header of Character class objects and methods

**********************************************************************************************************************/
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

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