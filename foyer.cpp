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
Foyer::Foyer() {
	//std::cout << "You are in Foyer..you check the front door but the door is locked" << std::endl;

	//space pointers
	top = NULL;
	right = NULL;
	left = NULL;
	bottom = NULL;

	nameOfRoom = "Foyer";

	item;	//items inside each room
	item.push_back("black widow spider"); //box one
	item.push_back("empty"); //empty

	statusPlayer = true; //true = inside current room
}

//getter

std::string Foyer::getType() {
	return nameOfRoom;
}

std::string Foyer::getItem(int i)
{
	return item[i-1];
}
