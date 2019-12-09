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

//default constructor
Player::Player()
{
	type = "Player";
	strength = 100; //starts at 100% health
	
}




double Player::getStrength()
{
	return strength;
}







/***********************************************************************************************************
recoveryPotion() method

***********************************************************************************************************/
//recovers 20% life for winner of battle
double Player::recovery()
{
	strength = strength + (strength * 0.20);
	return strength;
}

