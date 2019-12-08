/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File: livingroom.hpp
Description: this the header file for the class objects and methods

***************************************************************************************************/

#ifndef LIVINGROOM_HPP
#define LIVINGROOM_HPP

#include "space.hpp"


class LivingRoom : public Space 
{
private:
	
public:
	
	//default constructor
	LivingRoom();
	std::string getType();
};


#endif