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
#include "foyer.hpp"

class GamePlay
{

private:

	//spaces of the house 
	Space* foyer;
	Space* livingRoom;
	Space* bedRoom1;
	Space* bedRoom2;
	Space* kitchen;
	Space* bathRoom;
	Space* diningRoom;




public:
	//default constructor
	GamePlay();

	/*Space* enterLivingRoom();
	Space* enterBedRoom1();
	Space* enterBedRoom2();
	Space* enterBathRoom();
	Space* enterKitchen();
	Space* enterFoyer();*/


	void linkedSpace();

	void gameOn();

	int foyerMoveTo(); //in foyer but will move to next room user picks
	int livingRoomMoveTo(); //in living room but will move to next room user picks
	int bedRoom1MoveTo(); //in bedroom 1 but will move to next room user picks
	int bathRoomMoveTo(); //in bath room but will move to next room user picks
	int kitchenMoveTo(); //in kitchen but will move to next room user picks
	int diningRoomMoveTo(); //in dining room but will move to next room user picks
	int bedRoom2MoveTo(); //in bed room 2 but will move to next room user picks




};

#endif