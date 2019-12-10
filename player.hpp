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

	//back pack will hold all items
	std::vector<std::string> backPack;


public:
	//default constructor
	Player();

	//getter
	double getStrength();


	void addToBackPack(std::string items);
	void removeLastItem();

	void printBackPack();

	double reduceHealth();

};

#endif