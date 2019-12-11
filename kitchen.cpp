/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File: kitchen.cpp
Description: this the implementation file for the class objects and methods

***************************************************************************************************/
#include<iostream>
#include<vector>
#include<string>
#include "kitchen.hpp"

//implementation file not used

Kitchen::Kitchen()
{
	//space pointers
	top = NULL;
	right = NULL;
	left = NULL;
	bottom = NULL;
	
	nameOfRoom = "Kitchen";

	item;	//items inside each room
	item.push_back("night cap, "); //box one
	item.push_back("night light, "); //empty

	statusPlayer = true; //true = inside current room
}





std::string Kitchen::getTypeRoom()
{
	return nameOfRoom;
}