/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File:bdiningroom.cpp
Description: this the implementation file for the class objects and methods

***************************************************************************************************/
#include<iostream>
#include<vector>
#include<string>
#include "diningroom.hpp"

//implementation file not used

DiningRoom::DiningRoom()
{
	//space pointers
	top = NULL;
	right = NULL;
	left = NULL;
	bottom = NULL;
	
	nameOfRoom = "Dining Room";

	item;	//items inside each room
	item.push_back("pain killers, "); //box one
	item.push_back("pain killers, ");

	statusPlayer = true; //true = inside current room
}




//getter
std::string DiningRoom::getType()
{
	return nameOfRoom;
}