/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File: gameplay.cpp
Description: this the implementation file for the class objects and methods

***************************************************************************************************/
#include <iostream>
#include "space.hpp"
#include "bedroom1.hpp"
#include "bedroom2.hpp"
#include "bathroom.hpp"
#include "livingroom.hpp"
#include "kitchen.hpp"
#include "foyer.hpp"
#include "gameplay.hpp"
#include "diningroom.hpp"


//default constructor
GamePlay::GamePlay()
{
	foyer = new Foyer();
	livingRoom = new LivingRoom();
	bedRoom1 = new BedRoom_1();
	bedRoom2 = new BedRoom2();
	kitchen = new Kitchen();
	bathRoom = new BathRoom();
	diningRoom = new DiningRoom();

	linkedSpace(); //called to connect the spaces

	

}


/*****************************************************************************************************************
linkedSpace() method
*****************************************************************************************************************/
//links all the spaces
void GamePlay::linkedSpace()
{
	Space* connector; //pointer that links up the adjacent rooms

	//foyer linked spaces
	connector = foyer->getRight();
	connector = livingRoom;


	//living room linked spaces
	connector = livingRoom->getTop();
	connector = bedRoom1;

	connector = livingRoom->getBottom();
	connector = bathRoom;

	connector = livingRoom->getLeft();
	connector = foyer;

	connector = livingRoom->getRight();
	connector = kitchen;


	//bedroom 1 linked spaces
	connector = bedRoom1->getBottom();
	connector = livingRoom;


	//bathroom linked spaces
	connector = bathRoom->getTop();
	connector = livingRoom;


	//kitchen linked spaces
	connector = kitchen->getLeft();
	connector = livingRoom;

	connector = kitchen->getRight();
	connector = bedRoom2;

	connector = kitchen->getTop();
	connector = diningRoom;


	//bedroom 2 linked spaces	
	connector = bedRoom2->getLeft();
	connector = kitchen;

	//dining room linked spaces
	connector = diningRoom->getBottom();
	connector = kitchen;

}
//
///*****************************************************************************************************************
//foyerMoveTo() method
//*****************************************************************************************************************/
//
//int GamePlay::foyerMoveTo()
//{
//
//	Space* current = foyer; //initally start at foyer
//	current->roomMenu(); //prints menu for user
//
//	//add spme stuff for interaction and back pack			
//	int itemReceived = current->roomMenu();
//	std::cout << current->getItem(itemReceived);
//
//
//	std::cout << "Choose next room space to enter: (1) left, (2) up , (3) right, or (4) down: " << std::endl;
//	int chooseDirection = 0;
//	std::cin >> chooseDirection;
//
//	if (chooseDirection == 1)
//	{
//		current = current->getLeft();
//		current = livingRoom;
//		std::cout << current->getType();		
//	}
//	else if (chooseDirection == 2)
//	{
//		std::cout << "No room exists " << std::endl;
//	}
//	else if (chooseDirection == 3)
//	{
//		std::cout << "No room exists " << std::endl;
//	}
//	else if (chooseDirection == 4)
//	{
//		std::cout << "No room exists " << std::endl;
//	}
//
//	return chooseDirection;
//}
//
//


/*****************************************************************************************************************
gameOn() method
*****************************************************************************************************************/

void GamePlay::gameOn()
{

	Space* current = foyer; //where player starts initially 


	int steps = 10; //game steps
	while (steps > 0)
	{
		std::cout <<"step: " <<steps<< std::endl;
		//current room accesses menu for use

		int itemReceived = current->roomMenu();
		//std::cout << current->getItem(itemReceived);

		//current spaces defined as current room accessing pointer directions
		Space* top = current->getTop();
		Space* right = current->getRight();
		Space* left = current->getLeft();
		Space* bottom = current->getBottom();
		
		//testing - someting wrong with the direction pointers
		//std::cout<< current->getType();
		//std::cout << current->getTop();
		//std::cout << current->getLeft();
		//std::cout << current->getRight();
		//std::cout << current->getBottom();

		if (left != NULL)
		{
			std::cout << "The room on right is: " << left->getType() << std::endl;
			std::cout << "Would you like to enter the number (1) to move " << std::endl;
		}


		if (top != NULL)
		{
			std::cout << "The room on top is: " << top->getType() << std::endl;
			std::cout << "Would you like to enter the number (2) to move " << std::endl;
		}
		
		if (right != NULL)
		{
			
			std::cout << "The room on right is: " << right->getType() << std::endl;
			std::cout << "Would you like to enter the number (3) to move " << std::endl;
		}
		

		if (bottom != NULL)
		{
			std::cout << "The room on bottom is: " << bottom->getType() << std::endl;
			std::cout << "Would you like to enter the number (4) to move " << std::endl;
		}

		
		int chooseDirection = 0;
		std::cin >> chooseDirection;
	


		//*******************************************
		if (chooseDirection == 1)
		{
			current = left;
			std::cout << "You now entered: " << left->getType() << std::endl;
		}

		if (chooseDirection == 2)
		{
			current = top;
			std::cout << "You now entered: " << left->getTop() << std::endl;
		}

		if (chooseDirection == 3)
		{
			current = right;
			std::cout << "You now entered: " << left->getRight() << std::endl;
		}


		if (chooseDirection == 4)
		{
			current = bottom;
			std::cout << "You now entered: " << left->getBottom() << std::endl;
		}

		steps--;
	}


}


