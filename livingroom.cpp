/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File: livingroom.cpp
Description: this the implementation file for the class objects and methods

***************************************************************************************************/


#include <iostream>
#include<vector>
#include<string>
#include "livingroom.hpp"


LivingRoom::LivingRoom()
{


	//space pointers
	top = NULL;
	right = NULL;
	left = NULL;
	bottom = NULL;
	
	nameOfRoom = "Living Room";

	item;	//items inside each room
	item.push_back("pillow, "); //chest 1
	item.push_back("empty - no clue, "); //chest 2

	statusPlayer = true; //true = inside current room

}


std::string LivingRoom::getType()
{
	return nameOfRoom;
}






