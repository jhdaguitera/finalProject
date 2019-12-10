/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File: player.cpp
Description: this the file for implementing heman class objects and methods

****************************************************************************************************/
#include <iostream>
#include "player.hpp"
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
#include "gameplay.hpp"







//default constructor
Player::Player()
{
	std::string type = "Player";

	strength = 100; //starts at 100% health
	

}


void Player::addToBackPack(std::string item)
{
	backPack.push_back(item);
}




double Player::getStrength()
{
	return strength;
}



void Player::printBackPack() //prints out the items they have collected
{
	
	for (int i = 0; i < backPack.size(); i++)
	{
		std::cout << backPack[i];
	}
	 
}

void Player::removeLastItem()
{
	backPack.erase(backPack.begin()+backPack.size()-1);


}




double Player::reduceHealth()
{
	strength = strength - 10; //reduction of health by 10% after each step
	return strength;
}
