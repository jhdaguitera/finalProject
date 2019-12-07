/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File: gameplay.hpp
Description: this the header file for the class objects and methods

****************************************************************************************************/
#ifndef GAMEPLAY_HPP
#define GAMEPLAY_HPP

#include "space.hpp"
#include "bedroom.hpp"
#include "livingroom.hpp"
#include "kitchen.hpp"
#include "foyer.hpp"


class GamePlay
{

private:



public:
	//default constructor
	GamePlay();

	Space* enterLivingRoom();
	Space* enterBedRoom1();
	Space* enterKitchen();
	Space* enterFoyer();



};

#endif