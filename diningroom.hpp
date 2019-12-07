
/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File: diningroom.hpp
Description: this the header file for the class objects and methods

****************************************************************************************************/
#ifndef DININGROOM_HPP
#define DININGROOM_HPP

#include "space.hpp"
#include "diningroom.hpp"

class DiningRoom : public Space
{

private:
	bool key;

public:
	//default constructor
	DiningRoom();


	std::string getTypeRoom();


};

#endif