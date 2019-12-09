/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File:bedroom1.cpp
Description: this the implementation file for the class objects and methods

***************************************************************************************************/
#include<iostream>
#include<vector>
#include<string>
#include "bedroom1.hpp"



BedRoom_1::BedRoom_1()
{
	//space pointers
	top = NULL;
	right = NULL;
	left = NULL;
	bottom = NULL;
	
	nameOfRoom = "Bed Room 1";

	item;	//items inside each room
	item.push_back("note2"); //box one
	item.push_back("empty"); //empty

	statusPlayer = true; //true = inside current room
}




//getter
std::string BedRoom_1::getType()
{
	return nameOfRoom;
}
