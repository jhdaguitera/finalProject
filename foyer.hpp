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
	bool key;

public:
	//default constructor
	Foyer();

	//method to open door - will need a key
	void doorFront(bool key);

	std::string getType();
	

};

#endif