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

/*****************************************************************************************************************
foyerMoveTo() method
*****************************************************************************************************************/

int GamePlay::foyerMoveTo()
{

	Space* current = foyer; //initally start at foyer
	current->roomMenu(); //prints menu for user

	//add spme stuff for interaction and back pack			
	int itemReceived = current->roomMenu();
	std::cout << current->getItem(itemReceived);


	std::cout << "Choose next room space to enter: (1) left - Foyer, (2) up , (3) right, or (4) down: " << std::endl;
	int chooseDirection = 0;
	std::cin >> chooseDirection;

	if (chooseDirection == 1)
	{
		current = current->getLeft();
		current = livingRoom;
		std::cout << current->getType();		
	}
	else if (chooseDirection == 2)
	{
		std::cout << "No room exists " << std::endl;
	}
	else if (chooseDirection == 3)
	{
		std::cout << "No room exists " << std::endl;
	}
	else if (chooseDirection == 4)
	{
		std::cout << "No room exists " << std::endl;
	}

	return chooseDirection;
}


/*****************************************************************************************************************
livingRoomMoveTo() method
*****************************************************************************************************************/

int GamePlay::livingRoomMoveTo()
{
	Space* current = livingRoom; 
	current->roomMenu(); //prints menu for user

	//add spme stuff for interaction and back pack			
	int itemReceived = current->roomMenu();
	std::cout << current->getItem(itemReceived);


	std::cout << "Choose next room space to enter: (1) left , (2) up , (3) right, or (4) down: " << std::endl;
	int chooseDirection = 0;
	std::cin >> chooseDirection;

	if (chooseDirection == 1)
	{
		current = current->getLeft();
		current = foyer;
		std::cout << current->getType();
	}
	else if (chooseDirection == 2)
	{
		current = current->getTop();
		current = bedRoom1;
		std::cout << current->getType();
	}
	else if (chooseDirection == 3)
	{
		current = current->getRight();
		current = kitchen;
		std::cout << current->getType();
	}
	else if (chooseDirection == 4)
	{
		current = current->getBottom();
		current = bathRoom;
		std::cout << current->getType();
	}

	return chooseDirection;
}



/*****************************************************************************************************************
bedRoom1MoveTo() method
*****************************************************************************************************************/

int GamePlay::bedRoom1MoveTo()
{

	Space* current = bedRoom1;
	current->roomMenu(); //prints menu for user

	//add spme stuff for interaction and back pack			
	int itemReceived = current->roomMenu();
	std::cout << current->getItem(itemReceived);
	

	std::cout << "Choose next room space to enter: (1) left , (2) up , (3) right, or (4) down: " << std::endl;
	int chooseDirection = 0;
	std::cin >> chooseDirection;

	if (chooseDirection == 1)
	{
		current = current->getLeft();
		
		std::cout << "No room exists" << std::endl;

	}
	else if (chooseDirection == 2)
	{
		current = current->getTop();
		std::cout << "No room exists" << std::endl;
	}
	else if (chooseDirection == 3)
	{
		current = current->getRight();
		std::cout << "No room exists" << std::endl;
	}
	else if (chooseDirection == 4)
	{
		current = current->getBottom();
		current = livingRoom;
		std::cout << current->getType();
	}

	return chooseDirection;
}



/*****************************************************************************************************************
bedRoom1MoveTo() method
*****************************************************************************************************************/

int GamePlay::bathRoomMoveTo()
{
	
	Space* current = bathRoom;
	current->roomMenu(); //prints menu for user

	//add spme stuff for interaction and back pack			
	int itemReceived = current->roomMenu();
	std::cout << current->getItem(itemReceived);


	std::cout << "Choose next room space to enter: (1) left , (2) up , (3) right, or (4) down: " << std::endl;
	int chooseDirection = 0;
	std::cin >> chooseDirection;

	if (chooseDirection == 1)
	{
		current = current->getLeft();
		std::cout << "No room exists" << std::endl;
	}
	else if (chooseDirection == 2)
	{
		current = current->getTop();
		current = livingRoom;
	}
	else if (chooseDirection == 3)
	{
		current = current->getRight();
		std::cout << "No room exists" << std::endl;
	}
	else if (chooseDirection == 4)
	{
		current = current->getBottom();
		std::cout << "No room exists" << std::endl;
	}

	return chooseDirection;
}




/*****************************************************************************************************************
kitchenMoveTo() method
*****************************************************************************************************************/

int GamePlay::kitchenMoveTo()
{
	
	Space* current = kitchen;
	current->roomMenu(); //prints menu for user

	//add spme stuff for interaction and back pack			
	int itemReceived = current->roomMenu();
	std::cout << current->getItem(itemReceived);


	std::cout << "Choose next room space to enter: (1) left , (2) up , (3) right, or (4) down: " << std::endl;
	int chooseDirection = 0;
	std::cin >> chooseDirection;

	if (chooseDirection == 1)
	{
		current = current->getLeft();
		current = livingRoom;
		std::cout << current->getType();
	}
	else if (chooseDirection == 2)
	{
		current = current->getTop();
		current = diningRoom;
		std::cout << current->getType();
	}
	else if (chooseDirection == 3)
	{
		current = current->getRight();
		current = bedRoom2;
		std::cout << current->getType();
	}
	else if (chooseDirection == 4)
	{
		current = current->getBottom();
		std::cout << "No room exists" << std::endl;
	}

	return chooseDirection;
}


/*****************************************************************************************************************
diningMoveTo() method
*****************************************************************************************************************/

int GamePlay::diningRoomMoveTo()
{
	Space* current = diningRoom;
	current->roomMenu(); //prints menu for user

	//add spme stuff for interaction and back pack			
	int itemReceived = current->roomMenu();
	std::cout << current->getItem(itemReceived);


	std::cout << "Choose next room space to enter: (1) left , (2) up , (3) right, or (4) down: " << std::endl;
	int chooseDirection = 0;
	std::cin >> chooseDirection;

	if (chooseDirection == 1)
	{
		current = current->getLeft();
		std::cout << "No room exists" << std::endl;
	}
	else if (chooseDirection == 2)
	{
		current = current->getTop();
		std::cout << "No room exists" << std::endl;
	}
	else if (chooseDirection == 3)
	{
		current = current->getRight();
		std::cout << "No room exists" << std::endl;
	}
	else if (chooseDirection == 4)
	{
		current = current->getBottom();
		current = kitchen;
		std::cout << current->getType();
	}

	return chooseDirection;
}



/*****************************************************************************************************************
bedRoom2MoveTo() method
*****************************************************************************************************************/

int GamePlay::bedRoom2MoveTo()
{
	
	Space* current = bedRoom2;
	current->roomMenu(); //prints menu for user

	//add spme stuff for interaction and back pack			
	int itemReceived = current->roomMenu();
	std::cout << current->getItem(itemReceived);


	std::cout << "Choose next room space to enter: (1) left , (2) up , (3) right, or (4) down: " << std::endl;
	int chooseDirection = 0;
	std::cin >> chooseDirection;

	if (chooseDirection == 1)
	{
		current = current->getLeft();
		current = kitchen;
		std::cout << current->getType();
	}
	else if (chooseDirection == 2)
	{
		current = current->getTop();
		std::cout << "No room exists" << std::endl;
	}
	else if (chooseDirection == 3)
	{
		current = current->getRight();
		std::cout << "No room exists" << std::endl;
	}
	else if (chooseDirection == 4)
	{
		current = current->getBottom();
		std::cout << "No room exists" << std::endl;
	}

	return chooseDirection;
}






/*****************************************************************************************************************
gameOn() method
*****************************************************************************************************************/

void GamePlay::gameOn()
{
		
	int steps = 10; //game steps

	while (steps > 0)
	{
		foyerMoveTo();	 //in foyer but will move to next room user picks
		livingRoomMoveTo(); //in living room but will move to next room user picks
		bedRoom1MoveTo(); //in bedroom 1 but will move to next room user picks
		bathRoomMoveTo(); //in bath room but will move to next room user picks
		kitchenMoveTo(); //in kitchen but will move to next room user picks
		diningRoomMoveTo(); //in dining room but will move to next room user picks
		bedRoom2MoveTo(); //in bed room 2 but will move to next room user picks
			
	}

}






///*****************************************************************************************************************
//enterFoyer() method
//*****************************************************************************************************************/
////enter Foyer room
//Space* GamePlay::enterFoyer()
//{
//
//	Space* enterRoom = new Foyer();
//	int interact = enterRoom->interactRoomSpace();
//	std::cout << enterRoom->getItem(interact);
//
//	if (interact == 1)
//	{
//		std::cout << ": You open the chest and a black widow spider jumps on your hand and bites...health has decreased by 40%" << std::endl;
//	}
//	else if (interact == 2)
//	{
//		std::cout << ": The chest was empty =(" << std::endl;
//	}
//
//	std::cout << "Do you want to proceed to the living room - (1) yes or (2) no: " << std::endl;
//	int choose = 0;
//	std::cin >> choose;
//
//
//
//}

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

//
//
///*****************************************************************************************************************
//enterBedRoom1() method
//*****************************************************************************************************************/
////enter bed room
//Space* GamePlay::enterBedRoom1()
//{
//
//	Space* enterRoom = new BedRoom1();
//	int interact = enterRoom->interactRoomSpace();
//	std::cout << enterRoom->getItem(interact);
//
//	if (interact == 1)
//	{
//		std::cout << ": You found a pillow...and suddenly feel need to take a power nap...time was lost and decreased by 20%." << std::endl;
//	}
//	else if (interact == 2)
//	{
//		std::cout << ": You found vitamin pills...health has increased by 10%" << std::endl;
//	}
//
//}
//
//
//
///*****************************************************************************************************************
//enterBedRoom2() method
//*****************************************************************************************************************/
////enter bed room
//Space* GamePlay::enterBedRoom2()
//{
//
//	Space* enterRoom = new BedRoom2();
//	int interact = enterRoom->interactRoomSpace();
//	std::cout << enterRoom->getItem(interact);
//
//	if (interact == 1)
//	{
//		std::cout << ": You found a note..its says: The dead do not stay dead." << std::endl;
//	}
//	else if (interact == 2)
//	{
//		std::cout << "Empty" << std::endl;
//	}
//
//}
//
//
//
//
///*****************************************************************************************************************
//enterKitchen() method
//*****************************************************************************************************************/
////enter kitchen
//Space* GamePlay::enterKitchen()
//{
//
//	Space* enterRoom = new Kitchen();
//	int interact = enterRoom->interactRoomSpace();
//	std::cout << enterRoom->getItem(interact);
//
//	if (interact == 1)
//	{
//		std::cout << ": You found a butcher knife...keep it for protection...Your attack damage points increased by 25%" << std::endl;
//	}
//	else if (interact == 2)
//	{
//		std::cout << ": The chest was empty =(" << std::endl;
//	}
//
//}
//
//
//
///*****************************************************************************************************************
//enterBathRoom() method
//*****************************************************************************************************************/
////enter bathroom
//Space* GamePlay::enterBathRoom()
//{
//
//	Space* enterRoom = new BathRoom();
//	int interact = enterRoom->interactRoomSpace();
//	std::cout << enterRoom->getItem(interact);
//
//	if (interact == 1)
//	{
//		std::cout << ": You found a gun...attack points increased by 50%" << std::endl;
//	}
//	else if (interact == 2)
//	{
//		std::cout << ": You found pain killer pills...health has increased by 20%" << std::endl;
//	}
//
//}
//
