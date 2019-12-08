/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File:bedroom.hpp
Description: this the header file for the class objects and methods

***************************************************************************************************/

#ifndef BEDROOM2_HPP
#define BEDROOM2_HPP

#include "space.hpp"


class BedRoom_2 : public Space
{

private:

public:
	//default constructor
	BedRoom_2();
	std::string getType();

};

#endif