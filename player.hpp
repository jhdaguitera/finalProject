/*****************************************************************************
me: Jason Daguitera
CS 162
File: player.hpp
Description: this the file for header of class objects and methods

******************************************************************************/
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include "character.hpp"
#include <ctime>
#include <cstdlib>
#include <string>

class Player : public Character
{

private:
	//different items you will find on journey
	int potion;
	int key;
	int coin;
	
public:
	//default constructor
	Player();
	void data();
	

	std::string getType();
	
	int getWeapon();
	int getKey();
	int getPotion();
	int getCoin();
		
	double getStrength();

	int attackPoints();
	int defensePoints();

	int attacker();
	void defender(int damageTaken);

	bool checkLost();

	//recovers 20% life if wins battle
	int recoveryPotion();

	~Player() {}
};
#endif