/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File:foyer.cpp
Description: this the implementation file for the class objects and methods

***************************************************************************************************/
#include <iostream>
#include<vector>
#include <string>
#include "foyer.hpp"

//constructor
Foyer::Foyer()
{
		std::cout << "You are in Foyer..you check the front door but the door is locked" << std::endl;

		//space pointers
		top = NULL;
		right = NULL;
		left = NULL;
		bottom = NULL;
		prevRoom = NULL;
		nameOfRoom = "Foyer";

		item;	//items inside each room
		item.push_back("black widow spider"); //box one
		item.push_back("empty"); //empty

		statusPlayer = true; //true = inside current room
}

//getter
std::string Foyer::getType()
{
	return nameOfRoom;
}

/*****************************************************************************************************************
doorFront() method
****************************************************************************************************************/
//player attempts to open door to escape
void Foyer::doorFront(bool key)
{
	
	std::cout << "You check and see the front door will not open. It is lock from inside and requires a key" << std::endl;

	

	if (bool key = false)
	{
		std::cout << " You must find the key somewhere inside the house" << std::endl;
	}
	else
	{
		std::cout << " You used the key to unlock the front door." << std::endl;
		std::cout << "Congratulations! You are free!" << std::endl;
	}
}