/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File: gameplay.hpp
Description: this the header file for the class objects and methods

****************************************************************************************************/
#ifndef GAMEPLAY_HPP
#define GAMEPLAY_HPP

#include "space.hpp"
#include "bedroom1.hpp"
#include "bedroom2.hpp"
#include "bathroom.hpp"
#include "livingroom.hpp"
#include "kitchen.hpp"
#include "foyer.hpp"


class GamePlay
{

private:

	//spaces of the house 
	Space* foyer;
	Space* livingRoom;
	Space* bedRoom1;
	Space* bedRoom1;
	Space* kitchen;
	Space* bathroom;
	Space* diningRoom;




public:
	//default constructor
	GamePlay();

	Space* enterLivingRoom();
	Space* enterBedRoom1();
	Space* enterBedRoom2();
	Space* enterBathRoom();
	Space* enterKitchen();
	Space* enterFoyer();


	void linkedSpace();

};

#endif