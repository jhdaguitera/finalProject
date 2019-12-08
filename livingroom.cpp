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
	prevRoom = NULL;
	nameOfRoom = "Living Room";

	item;	//items inside each room
	item.push_back("sticky note"); //chest 1
	item.push_back("vitamin pills"); //chest 2

	statusPlayer = true; //true = inside current room

}


std::string LivingRoom::getType()
{
	return nameOfRoom;
}






