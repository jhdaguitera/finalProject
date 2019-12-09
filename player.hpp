/*****************************************************************************
me: jason daguitera
cs 162
file: player.hpp
description: this the file for header of class objects and methods

******************************************************************************/
#ifndef player_hpp
#define player_hpp

#include <iostream>
#include "character.hpp"
#include <ctime>
#include <cstdlib>
#include <string>


class Player : public Character
{

private:
	int strength;
	std::string backpack;
	
public:
	//default constructor
	Player();

	//getter
	double getStrength();

	//recovers 20% life if wins battle
	double recovery();

};
#endif