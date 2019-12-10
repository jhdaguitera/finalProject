/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File:bedroom.cpp
Description: this the implementation file for the class objects and methods

***************************************************************************************************/
#include<iostream>
#include "bedroom.hpp"

//implementation file not used

BedRoom::BedRoom()
{
	//space pointers
	top = NULL;
	right = NULL;
	left = NULL;
	bottom = NULL;

	nameOfRoom = "Bed Room";

	item;	//items inside each room
	item.push_back("item1"); //box one
	item.push_back("empty"); //empty

	statusPlayer = true; //true = inside current room
}




