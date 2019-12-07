
/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File: kitchen.hpp
Description: this the header file for the class objects and methods

***************************************************************************************************/

#ifndef KITCHEN_HPP
#define KITCHEN_HPP

#include "space.hpp"


class Kitchen : public Space
{

private:

public:
	//default constructor
	Kitchen();
	std::string getTypeRoom();


};

#endif