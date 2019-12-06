/*********************************************************************************************************************
Name: Jason Daguitera
CS 162
File: battle.cpp
Description: this the file for implementing test driver methods

**********************************************************************************************************************/


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>
#include "menu.hpp"
#include "character.hpp"
#include "heman.hpp"
#include "skeletor.hpp"

/**********************************
fightOrFlee() method
***********************************/
//player can choose to fight or flee from enemy encountered

int fightOrFlee()
{
	int choose = 0;
	std::cout << "Would you like to fight enemy now? (1) fight or (2) run away";
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
	while (choose < 1 || choose > 16)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid...try again" << std::endl;
		std::cin >> choose;
	}



}



/**********************************
battle() method
***********************************/
//player will fight enemy encountered

void battle()
{

	int damageTaken = 0;
	Character* player;
	Character* enemy;


	int choose = fightOrFlee();

		if (choose == 1)
		{
			//set up new memory allocation
			player = new Player;
			enemy = new Skeletor;

			//players point to initial character data
			player->data();
			enemy->data();

			//players point to get character type
			std::cout << "\nHe-Man vs " << player->getType();
			std::cout << "Skeletor... " << enemy->getType() << std::endl;
			std::cout << std::endl;

			//checks if any players lost round
			bool player1Lost = false;
			bool enemyLost = false;

			//player winner and loser
			while (player1Lost == false && enemyLost == false)
			{
				//player point to attacker method
				std::cout << player << " is attacking..." << std::endl;
				damageTaken = player->attacker();

				//player point to defender method
				std::cout << enemy <<" is defense:" << std::endl;
				enemy->defender(damageTaken);

				//checks is player lost round
				enemyLost = enemy->checkLost();
				if (enemyLost == false)
				{
					std::cout << enemy << " is attacking:" << std::endl;
					damageTaken = enemy->attacker();

					std::cout << player <<"is defending" << std::endl;
					player->defender(damageTaken);
					std::cout << std::endl;
				}

				player1Lost = player->checkLost();
			}
			if (player1Lost == true)
			{
				std::cout << "You lose! Game Over " << enemy->getType() << std::endl;
			}
			else if (enemyLost == true)
			{
				std::cout << player << "YOu have defeated Skeletor and all his evil forces! ";
			}

			//deallocation of memory
			delete player;
			delete enemy;


		}
}