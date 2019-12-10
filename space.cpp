/*****************************************************************************************************
 Name: Jason Daguitera
 CS 162
 File: space.cpp
 Description: this the file for implementing space class objects and methods

 ****************************************************************************************************/
#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>

#include "space.hpp"
#include "map.hpp"

//*****************************************************************
//getter for items in chest

std::string Space::getItem(int i) //gets item
{
	return item[i - 1]; //items from vector
}



//getters for direction
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



//***************************************

//setters for direction
void Space::setRight(Space* s)
{
	right = s;
}

void Space::setLeft(Space* s)
{
	left = s;
}
void Space::setTop(Space* s)
{
	top = s;
}
void Space::setBottom(Space* s)
{
	bottom = s;
}



/****************************************************************************************************************
roomMenu()
****************************************************************************************************************/
int Space::roomMenu()  //gives options for user to interact with space
{
	std::cout << std::endl;
		
	std::cout << "--------------------------------------------- " << std::endl;
	std::cout << "|                                           |" << std::endl;
	std::cout << "|                 (" << nameOfRoom << ")                 " << std::endl;
	std::cout << "|                                           |" << std::endl;
	std::cout << "|                                           |" << std::endl;
	std::cout << "|                                           |" << std::endl;
	std::cout << "|                1         2                |" << std::endl;
	std::cout << "|               [?]       [?]               |" << std::endl;
	std::cout << "|                                           |" << std::endl;
	std::cout << "|                     O                     |" << std::endl;
	std::cout << "|                    -|-                    |" << std::endl;
	std::cout << "|                    / \\                    |" << std::endl;
	std::cout << "--------------------------------------------- " << std::endl;
	std::cout << "You discover there are two chests in the center of the " << nameOfRoom << std::endl;

	//chest options
	std::cout << std::endl;
	std::cout << "Which do you choose to open - chest (1) or chest (2): ";
	int choose = 0;
	std::cin >> choose;

	//validate user input
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid...try again" << std::endl;
		std::cin >> choose;
	}
	//validate user input
	while (choose < 1 || choose > 2)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid...try again" << std::endl;
		std::cin >> choose;
	}

	   	
	   	 
	//opening map
	std::cout << "Do you want to open up the map of the house? (1)yes or (2)no: ";
	int openMap = 0;
	std::cin >> openMap;

	//validate user input
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid...try again" << std::endl;
		std::cin >> openMap;
	}
	//validate user input
	while (openMap < 1 || openMap > 2)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid...try again" << std::endl;
		std::cin >> openMap;
	}

	
	if (openMap == 1)
	{
		Map();
	}






	return choose;

}