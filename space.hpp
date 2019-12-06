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
#include "player.hpp"
#include "character.hpp"

class Space
{

protected:
	//space pointers
	Space* top;
	Space* right;
	Space* left;
	Space* bottom;
	Space* nextRoom;
	Space* prevRoom;

	std::string message;	


public:

	void setLinkedSpace(Space*, Space*, Space*, Space*);


};



#endif 