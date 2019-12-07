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
#include "foyer.hpp"

//default constructor
GamePlay::GamePlay()
{
	foyer = new Foyer();
	livingRoom = new LivingRoom();
	bedRoom1 = new BedRoom1();
	bedRoom1 = new BedRoom2();
	kitchen = new Kitchen();
	bathroom = new BathRoom();
	diningRoom = new DiningRoom();

	linkedSpace(); //called to connect the spaces

}


/*****************************************************************************************************************
linkedSpace() method
*****************************************************************************************************************/
//links all the spaces

void GamePlay::linkedSpace()
{
	foyer->getTop() = livingRoom;
	



}
















/*****************************************************************************************************************
enterFoyer() method
*****************************************************************************************************************/
//enter Foyer room
Space* GamePlay::enterFoyer()
{

	Space* enterRoom = new Foyer();
	int interact = enterRoom->interactRoomSpace();
	std::cout << enterRoom->getItem(interact);

	if (interact == 1)
	{
		std::cout << ": You open the chest and a black widow spider jumps on your hand and bites...health has decreased by 40%" << std::endl;
	}
	else if (interact == 2)
	{
		std::cout << ": The chest was empty =(" << std::endl;
	}

	std::cout << "Do you want to proceed to the living room - (1) yes or (2) no: " << std::endl;
	int choose = 0;
	std::cin >> choose;



}

/*****************************************************************************************************************
enterLivingRoom() method
*****************************************************************************************************************/
//enter living room
//Space* GamePlay::enterLivingRoom()
//{
//		
//	Space* newRoom = new LivingRoom();
//	int interact = newRoom->interactRoomSpace();
//
//	Space* top = NULL;
//	Space* right = NULL;
//	Space* left = NULL;
//	Space* bottom = NULL;
//
//	
//
//	std::cout << newRoom->getItem(interact);  //gets item inside chest user chose
//
//	if (interact == 1)
//	{
//		std::cout << ": What you seek to find...might find you." << std::endl;
//	}
//	else if (interact == 2)
//	{
//		std::cout << ": You found vitamin pills...health has increased by 10%" << std::endl;
//	}
//	
//
//
//	std::cout << "Choose next room space to enter: (1) left - Foyer, (2) up - 1rst Bed Room, (3) right - Kitchen, or (4) down - 1rst Bathroom: " << std::endl;
//	int chooseDirection = 0;
//	std::cin >> chooseDirection;
//
//	if (chooseDirection == 1)
//	{
//		left-> enterFoyer();
//	}
//
//	else if (chooseDirection == 2)
//	{
//		top -> enterBedRoom1();
//
//	}
//
//	else if (chooseDirection == 3)
//	{
//		right -> enterKitchen();
//	}
//
//	else if (chooseDirection == 4)
//	{
//		bottom -> enterBathRoom1();
//	}
//}
//
//
//
//
//



/*****************************************************************************************************************
enterBedRoom1() method
*****************************************************************************************************************/
//enter bed room
Space* GamePlay::enterBedRoom1()
{

	Space* enterRoom = new BedRoom1();
	int interact = enterRoom->interactRoomSpace();
	std::cout << enterRoom->getItem(interact);

	if (interact == 1)
	{
		std::cout << ": You found a pillow...and suddenly feel need to take a power nap...time was lost and decreased by 20%." << std::endl;
	}
	else if (interact == 2)
	{
		std::cout << ": You found vitamin pills...health has increased by 10%" << std::endl;
	}

}



/*****************************************************************************************************************
enterBedRoom2() method
*****************************************************************************************************************/
//enter bed room
Space* GamePlay::enterBedRoom2()
{

	Space* enterRoom = new BedRoom2();
	int interact = enterRoom->interactRoomSpace();
	std::cout << enterRoom->getItem(interact);

	if (interact == 1)
	{
		std::cout << ": You found a note..its says: The dead do not stay dead." << std::endl;
	}
	else if (interact == 2)
	{
		std::cout << "Empty" << std::endl;
	}

}




/*****************************************************************************************************************
enterKitchen() method
*****************************************************************************************************************/
//enter kitchen
Space* GamePlay::enterKitchen()
{

	Space* enterRoom = new Kitchen();
	int interact = enterRoom->interactRoomSpace();
	std::cout << enterRoom->getItem(interact);

	if (interact == 1)
	{
		std::cout << ": You found a butcher knife...keep it for protection...Your attack damage points increased by 25%" << std::endl;
	}
	else if (interact == 2)
	{
		std::cout << ": The chest was empty =(" << std::endl;
	}

}



/*****************************************************************************************************************
enterBathRoom() method
*****************************************************************************************************************/
//enter bathroom
Space* GamePlay::enterBathRoom()
{

	Space* enterRoom = new BathRoom();
	int interact = enterRoom->interactRoomSpace();
	std::cout << enterRoom->getItem(interact);

	if (interact == 1)
	{
		std::cout << ": You found a gun...attack points increased by 50%" << std::endl;
	}
	else if (interact == 2)
	{
		std::cout << ": You found pain killer pills...health has increased by 20%" << std::endl;
	}

}
