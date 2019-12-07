/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File:bedroom1.cpp
Description: this the implementation file for the class objects and methods

***************************************************************************************************/
#include<iostream>
#include "bathroom.hpp"

//implementation file not used

BathRoom::BathRoom()
{
	//space pointers
	top = NULL;
	right = NULL;
	left = NULL;
	bottom = NULL;
	prevRoom = NULL;
	nameOfRoom = "Bath Room";

	item;	//items inside each room
	item.push_back("gun"); //box one
	item.push_back("pain killers"); //empty

	statusPlayer = true; //true = inside current room
}




