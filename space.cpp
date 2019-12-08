/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File: space.cpp
Description: this the file for implementing space class objects and methods

****************************************************************************************************/
#include <iostream>
#include <string>
#include "space.hpp"


int Space::roomMenu()  //gives options for user to interact with space
{
	std::cout << "You have entered the: " << nameOfRoom << std::endl;
	std::cout << "You have see two chests in the room: " << std::endl;
	std::cout << std::endl;


	std::cout << "**********" << nameOfRoom << "********* " << std::endl;
	std::cout << "--------------------------------------------- " << std::endl;
	std::cout << "|                                           |" << std::endl;
	std::cout << "|                1         2                |" << std::endl;
	std::cout << "|               [?]       [?]               |" << std::endl;
	std::cout << "|                                           |" << std::endl;
	std::cout << "|                    (O)                    |" << std::endl;
	std::cout << "|                   --|--                   |" << std::endl;
	std::cout << "|                    / \                    |" << std::endl;
	std::cout << "--------------------------------------------- " << std::endl;

	std::cout << std::endl;
	std::cout << "Will you choose to open (1) chest to the left or (2) chest to the right: ";
	int chooseItem = 0;
	std::cin >> chooseItem;

	return chooseItem;

	


}

std::string Space::getItem(int i) //gets item
{
	return item[i - 1]; //items from vector
}


Space* Space::getTop()
{
	return top;

}


Space* Space::getLeft()
{
	return left;
}

Space* Space::getRight()
{
	return right;
}
Space* Space::getBottom() 
{
	return bottom;
}

std::string Space::getType()
{
	return nameOfRoom;
}