/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File:bedroom1.cpp
Description: this the implementation file for the class objects and methods

***************************************************************************************************/
#include<iostream>
#include<vector>
#include<string>
#include "bathroom.hpp"

//implementation file not used

BathRoom::BathRoom()
{
	//space pointers
	top = NULL;
	right = NULL;
	left = NULL;
	bottom = NULL;
	
	nameOfRoom = "Bath Room";

	item;	//items inside each room
	item.push_back(" blindfold, "); //box one
	item.push_back(" sleeping pills, "); //empty

	statusPlayer = true; //true = inside current room
}




//getter
std::string BathRoom::getType()
{
	return nameOfRoom;
}