/*********************************************************************************************************************
 Name: Jason Daguitera
 CS 162
 File: main.cpp
 Description: this the main file for the Haunted House game

 **********************************************************************************************************************/
#include <iostream>
#include <limits>
#include <cstdlib>

#include "gameplay.hpp"

int main()
{
	
	//Prompt:
	std::cout << "You wake up feeling weak and drowsy. " << std::endl;
	std::cout << "You wake up in the foyer of a strange house that feels super eery. " << std::endl;
	std::cout << "You try to exit through front door but discover it is locked from the inside. " << std::endl;
	std::cout << "A key is needed to open the door. " << std::endl;
	std::cout << "You need to find a key to be freed. " << std::endl;
	std::cout << "As you gather your thoughts...realize you can hear faint footsteps coming from somewhere in this house. " << std::endl;
	std::cout << std::endl;

	std::cout << "Would you like to explore this house to find the key? (1)yes or (2)no: ";
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


	   

	system("cls");
	if (choose == 1)
	{
		//need to implement diminishing health after each step
		std::cout << "Let's Begin...you are very weak and with each step you take drains your energy. " << std::endl;
		std::cout << std::endl;
		
		GamePlay play;
		play.gameOn();

		
	}
	else
	{
		std::cout << "You forfeit...GAME OVER!" << std::endl;
		exit(0);
	}

	

	return 0;

}
