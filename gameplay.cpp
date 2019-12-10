/*****************************************************************************************************
 Name: Jason Daguitera
 CS 162
 File: gameplay.cpp
 Description: this the implementation file for the class objects and methods

 ***************************************************************************************************/
#include <iostream>
#include <cstdlib>
#include <string>

#include "space.hpp"
#include "bedroom1.hpp"
#include "bedroom2.hpp"
#include "bathroom.hpp"
#include "livingroom.hpp"
#include "kitchen.hpp"
#include "foyer.hpp"
#include "gameplay.hpp"
#include "diningroom.hpp"
#include "player.hpp"

//default constructor
GamePlay::GamePlay() {
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
	//foyer linked spaces
	foyer->setRight(livingRoom);

	//living room linked spaces
	livingRoom->setTop(bedRoom1);
	livingRoom->setBottom(bathRoom);
	livingRoom->setLeft(foyer);
	livingRoom->setRight(kitchen);

	//bedroom1 linked spaces
	bedRoom1->setBottom(livingRoom);

	//bathroom linked spaces
	bathRoom->setTop(livingRoom);

	//kitchen linked spaces
	kitchen->setLeft(livingRoom);
	kitchen->setRight(bedRoom2);
	kitchen->setTop(diningRoom);

	//bedroom2 linked spaces	
	bedRoom2->setLeft(kitchen);

	//dining room linked spaces
	diningRoom->setBottom(kitchen);
}



/*****************************************************************************************************************
 gameOn() method
 *****************************************************************************************************************/

void GamePlay::gameOn()
{

	Space* current = foyer; //where player starts initially in the game

	int steps = 10; //game steps
	while (steps > 0)
	{
		std::cout << "step: " << steps << std::endl;

		//player health status
		Player player;
		//drains 10% after after each step taken
		std::cout << "Current Health percentage: " << health.getStrength() - health.getStrength() * 1.1;



		//current room accesses menu for use

		int itemReceived = current->roomMenu();

		//current room defined as current room pointing to next room
		Space* top = current->getTop();
		Space* right = current->getRight();
		Space* left = current->getLeft();
		Space* bottom = current->getBottom();


		std::cout << "You are currently in " << current->getType() << ". Enter choice of where to move next: " << std::endl;

		if (left != NULL)
		{
			std::cout << "(1)LEFT: " << left->getType() << std::endl;
		}

		if (top != NULL)
		{
			std::cout << "(2)TOP: " << top->getType() << std::endl;
		}

		if (right != NULL)
		{
			std::cout << "(3)RIGHT: " << right->getType() << std::endl;
		}

		if (bottom != NULL) {
			std::cout << "(4)BOTTOM: " << bottom->getType() << std::endl;
		}

		std::cout << std::endl;
		int choice = 0;
		std::cout << "choice: ";
		std::cin >> choice;

		//validate user input
		while (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid...try again" << std::endl;
			std::cin >> choice;
		}
		//validate user input
		while (choice < 1 || choice > 4)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid...try again" << std::endl;
			std::cin >> choice;
		}


		//clears previous screen
		system("CLS");



		/**************************************/

		std::cout << std::endl;

		if (choice == 1)
		{
			current = current->getLeft();
			std::cout << "You now entered: " << current->getType() << std::endl;
		}

		if (choice == 2)
		{
			current = current->getTop();
			std::cout << "You now entered: " << current->getType() << std::endl;
		}

		if (choice == 3)
		{
			current = current->getRight();
			std::cout << "You now entered: " << current->getType() << std::endl;
		}

		if (choice == 4)
		{
			current = current->getBottom();
			std::cout << "You now entered: " << current->getType() << std::endl;
		}


		//counter
		steps --;
	}
}

/*

void GamePlay::printRooms()
{
	Space *current = foyer;

	
	while (current) 
	{
		std::cout << current->getType() << std::endl;
		current = current->getRight();
	}

	current = bedRoom2;
	while (current)
	{
		std::cout << current->getType() << std::endl;
		current = current->getLeft();
	}

	current = livingRoom->getTop();
	std::cout << current->getType() << std::endl;

	current = livingRoom->getBottom();
	std::cout << current->getType() << std::endl;

	current = kitchen->getTop();
	std::cout << current->getType() << std::endl;

}

*/