/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File:bathroom.hpp
Description: this the header file for the class objects and methods

***************************************************************************************************/

#ifndef BATHROOM_HPP
#define BATHROOM_HPP

#include "space.hpp"


class BathRoom : public Space
{

private:

public:
	//default constructor
	BathRoom();
	std::string getType();

};

#endif