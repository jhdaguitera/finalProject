/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File: space.hpp
Description: this the header  file for the space class objects and methods

****************************************************************************************************/
#ifndef SPACE_HPP
#define SPACE_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
#include "player.hpp"
#include "character.hpp"

class Space
{

protected:
	//space pointers
	Space* top = NULL;
	Space* right = NULL;
	Space* left = NULL;
	Space* bottom = NULL;
	Space* prevRoom = NULL;
	std::string nameOfRoom = NULL;

	std::vector<std::string> item;	//items inside each room
	
	bool statusPlayer; //true = inside current room


public:

	
	int interactRoomSpace();
	std::string getItem(int i);
};




#endif 
