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
 interaction_1() method
 *****************************************************************************************************************/

void GamePlay::interaction_1()
{
	system("CLS");
	std::cout << "\nAfter you choose an item from the chest...You hear footsteps running at you!" << std::endl;
	std::cout << "\nA zombie has attacked you and bit you on the shoulder." << std::endl;
	std::cout << "\nYou have take substantial health damage and the Zombie has stole last item from backpack." << std::endl;

}


/*****************************************************************************************************************
 interaction_2() method
 *****************************************************************************************************************/

void GamePlay::interaction_2()
{
		
	system("CLS");
	std::cout << "\nYou see a window and realize you might be able to escape through the window." << std::endl;
	std::cout << "\nThere is a lock on the window that can be opened with the correct word inputted into the lock." << std::endl;
	std::cout << "\nLook at the clues you have in your back pack for help." << std::endl;

	std::cout << std::endl;
	std::cout << "\nYou unzip your back pack and look at the collected clues for ideas:";
	
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\nYou see a window sill and see a riddle that reads: " << std::endl;
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\nWHAT IS A QUESTION THAT YOU CANNOT LIE WHEN ANSWERING???" << std::endl;
	std::cout << "\nAre you __________ ? (fill in the blank)" << std::endl;

	std::string answer;
	std::cin >> answer;

	if (answer == "sleeping")
	{
		std::cout << "You have figured out the riddle...you input the word sleeping into the lock and the window is opened " << std::endl;
		std::cout << "You WIN! You have escaped the haunted house! " << std::endl;

		exit(0);
	}

	else
	{
		std::cout << "You did not figure out the riddle...Zombies have come into the room and there is no escape. " << std::endl;
		std::cout << "You are dead! GAME OVER! " << std::endl;
		exit(0);
	}
		
}




/*****************************************************************************************************************
 interaction_3() method
 *****************************************************************************************************************/

void GamePlay::interaction_3()
{
	std::cout << "\nAfter taking the pain killer pills you feel better from the zombie bites" << std::endl;
	std::cout << "\nYou begin to feel rejuvenated." << std::endl;
	std::cout << "\nYour health meter has increased!" << std::endl;

	

}



/*****************************************************************************************************************
 interaction_4() method
 *****************************************************************************************************************/

void GamePlay::interaction_4()
{
	system("CLS");
	std::cout << "\nUpon entering the room, you feel a strange presence in the room." << std::endl;
	std::cout << "\nA ghost of a girl has manifested and has begun to sing a song" << std::endl;
	std::cout << "\nShe sings: Are you sleeping, Are you sleeping," << std::endl;
	std::cout << "\nBrother John, Brother John," << std::endl;
	std::cout << "\nMorning bells are ringing, morning bells are ringing," << std::endl;
	std::cout << "\nDing Ding Dong, Ding Ding Dong," << std::endl;

	std::cout << "\nCould this be be a clue?" << std::endl;

	

}

/*****************************************************************************************************************
 gameOn() method
 *****************************************************************************************************************/

void GamePlay::gameOn()
{
	Space* current = foyer; //where player starts initially in the game

	//player health status
	Player player;
		
	int steps = 10; //game steps

	while (steps > 0 && player.getStrength() > 0) //if step less than 0 or player strength less less than 0, loop stops
	{
		//std::cout << "step: " << steps << std::endl;

		std::cout << "Player's health meter: " << player.getStrength() << "%"; //prints player health

		int elementPosition = current->roomMenu();   //get element from chest in room
				

		std::string itemReceived = current->getItem(elementPosition); //item recieved

		player.addToBackPack(itemReceived); //added items put backback
		
		//check backpack contents
		std::cout << " \nDo you want to look at the items collected in your back pack? (1) yes or (2) no: ";
		int choice1 = 0;
		std::cin >> choice1;

		//validate user input
		while (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid...try again" << std::endl;
			std::cin >> choice1;
		}
		//validate user input
		while (choice1 < 1 || choice1 > 2)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid...try again" << std::endl;
			std::cin >> choice1;
		}

		if (choice1 == 1)
		{
			player.printBackPack();
		}
		else
		{
			std::cout << "Will not check back pack." << std::endl;
		}
			

		/*********************************************************************************************/
		//if player in bedroom 2
		if (current == bedRoom2)
		{

			interaction_2(); //call interaction
			player.printBackPack();

			steps = -1; //ends the loop

		}

		/*********************************************************************************************/
		//if player in kitchen
		if (current == kitchen)
		{
			interaction_1(); //calling interaction with zombie in kitchen
			player.reduceHealth2();

			std::cout << "\nPlayer's health meter: " << player.getStrength() << "%" << std::endl; //prints
			
			player.removeLastItem(); //zombie stole one item from bag

			std::cout << "The remaining items inside back pack are: ";

			player.printBackPack(); //prints items in bag

			
						
		}


		/*********************************************************************************************/
		//if player in dining room
		if (current == diningRoom)
		{
			interaction_3(); //calling interaction 
			
			std::cout << "You received healing from the pills. Health points increased by: " << std::endl;
			std::cout << player.healing() << " points." << std::endl;


			
			
		}

		/*********************************************************************************************/
		//if player in bedroom1 
		if (current == bedRoom1)
		{
			interaction_4(); //calling interaction 

		}



		/*********************************************************************************************/
		//current room defined as current room pointing to next room
		Space* top = current->getTop();
		Space* right = current->getRight();
		Space* left = current->getLeft();
		Space* bottom = current->getBottom();

		std::cout << "\n\nYou are currently in " << current->getType() << ". Enter choice of where to move next: " << std::endl;

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

		std::cout << std::endl;

		/*********************************************************************************************/

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
		steps--;
		player.reduceHealth();
	}

		
	std::cout << "Your life has drained to 0% ...You lose! GAME OVER!" << std::endl;

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