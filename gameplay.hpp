/*****************************************************************************************************
 Name: Jason Daguitera
 CS 162
 File: gameplay.hpp
 Description: this the header file for the class objects and methods

 ****************************************************************************************************/
#ifndef GAMEPLAY_HPP
#define GAMEPLAY_HPP

#include <iostream>
#include "space.hpp"
#include "bedroom1.hpp"
#include "bedroom2.hpp"
#include "bathroom.hpp"
#include "livingroom.hpp"
#include "kitchen.hpp"
#include "foyer.hpp"
#include "diningroom.hpp"

class GamePlay {

private:

	//spaces of the house 
	Space *foyer;
	Space *livingRoom;
	Space *bedRoom1;
	Space *bedRoom2;
	Space *kitchen;
	Space *bathRoom;
	Space *diningRoom;

	int steps;

public:
	//default constructor
	GamePlay();
	 

	void linkedSpace();
	void gameOn();
	void interaction_1();
	void interaction_2();
	void interaction_3();
	void interaction_4();

	
};

#endif
