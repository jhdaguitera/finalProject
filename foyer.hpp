/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File: foyer.hpp
Description: this the header file for the class objects and methods

****************************************************************************************************/
#ifndef FOYER_HPP
#define FOYER_HPP

#include "space.hpp"
#include "foyer.hpp"

class Foyer : public Space
{

private:

public:
	//default constructor
	Foyer();

	std::string getType();
	
	

};

#endif