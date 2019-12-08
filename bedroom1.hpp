/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File:bedroom.hpp
Description: this the header file for the class objects and methods

***************************************************************************************************/

#ifndef BEDROOM1_HPP
#define BEDROOM1_HPP

#include "space.hpp"


class BedRoom_1 : public Space
{

private:

public:
	//default constructor
	BedRoom_1();
	std::string getType();

};

#endif