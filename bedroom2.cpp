/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File:bedroom2.cpp
Description: this the implementation file for the class objects and methods

***************************************************************************************************/
#include<iostream>
#include<vector>
#include<string>
#include "bedroom2.hpp"

//implementation file not used

BedRoom2::BedRoom2()
{
	//space pointers
	top = NULL;
	right = NULL;
	left = NULL;
	bottom = NULL;
	
	nameOfRoom = "Bed Room 2";

	item;	//items inside each room
	item.push_back("note: ZZZZzzzzzz"); //box one
	item.push_back("note: ZZZZZzzzz"); //empty

	statusPlayer = true; //true = inside current room
}




//getter
std::string BedRoom2::getType()
{
	return nameOfRoom;
}