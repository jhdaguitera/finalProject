/*****************************************************************************
me: jason daguitera
cs 162
file: player.hpp
description: this the file for header of class objects and methods

******************************************************************************/
#ifndef player_hpp
#define player_hpp

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>


class Player 
{

private:
	int strength;

	std::vector<std::string> backPack;
	
	
public:
	//default constructor
	Player();

	//getter
	double getStrength();

	//recovers 20% life if wins battle
	double recovery();

	double getEnergyDrain();
};
#endif