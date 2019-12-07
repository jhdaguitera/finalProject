/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File:bedroom2.cpp
Description: this the implementation file for the class objects and methods

***************************************************************************************************/
#include<iostream>
#include "bedroom2.hpp"

//implementation file not used

BedRoom2::BedRoom2()
{
	//space pointers
	top = NULL;
	right = NULL;
	left = NULL;
	bottom = NULL;
	prevRoom = NULL;
	nameOfRoom = "Bed Room 1";

	item;	//items inside each room
	item.push_back("note2"); //box one
	item.push_back("empty"); //empty

	statusPlayer = true; //true = inside current room
}




